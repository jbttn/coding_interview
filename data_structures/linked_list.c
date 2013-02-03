#include "linked_list.h"

List* ListCreate() {
  return calloc(1, sizeof(List));
}

void ListDestroy(List *list) {

}

void ListPush(List *list, void *data) {
  Node *newNode = calloc(1, sizeof(Node));

  if(list->head == NULL) {
    list->head = newNode;
    list->tail = newNode;
  } else {
    newNode->prev = list->tail;
    list->tail->next = newNode;
    list->tail = newNode;
  }

  newNode->data = data;
  list->count++;
}

void ListUnshift(List *list, void *data) {
  Node *newNode = calloc(1, sizeof(Node));

  if(list->head == NULL) {
    list->head = newNode;
    list->tail = newNode;
  } else {
    newNode->next = list->head;
    list->head->prev = newNode;
    list->head = newNode;
  }

  newNode->data = data;
  list->count++;
}