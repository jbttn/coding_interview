/*
*  Implement an algorithm to determine if a string has all unique characters.
*  What if you cannot use additional data structures?
*/

#include "stdio.h"
#include "stdlib.h"
#include "strings.h"

int unique(char str[]) {
  int characters[256] = {0}; // Assuming ASCII
  int length = strlen(str);
  int i;

  for(i = 0; i < length; i++) {
    int c = str[i];
    if(characters[c] == 1)
      return 0;
    else
      characters[c] = 1;
  }

  return 1;
}

int main(int argc, void *argv[]) {
  int result = unique(argv[1]);
  if(result)
    printf("Characters are unique\n");
  else
    printf("Characters are NOT unique\n");
  return 0;
}