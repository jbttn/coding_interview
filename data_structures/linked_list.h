#ifndef JBTTN_LIST_H
#define JBTTN_LIST_H

#include <stdlib.h>

struct Node;

typedef struct Node {
  void *data;
  struct Node *next;
  struct Node *prev;
} Node;

typedef struct List {
  int count;
  Node *head;
  Node *tail;
} List;

List* ListCreate();
void ListDestroy(List *);

void ListPush(List *, void *);
void ListUnshift(List *, void *);

#endif