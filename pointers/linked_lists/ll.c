/*
 * =====================================================================================
 *
 *       Filename:  ll.c
 *
 *    Description:  linked list example
 *
 *        Version:  1.0
 *        Created:  11/21/2018 03:33:44 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct listitem {
  struct listitem *next;  // pointer to next item
  int data;               // some data
} LISTITEM;

int main() {
  LISTITEM *listhead, *temp;

  listhead = NULL;

  // now populate the list
  for (int i = 0; i < 3; i++) {
    temp = malloc(sizeof(LISTITEM));
    temp->data = i;
    temp->next = listhead;
    listhead = temp;
  }

  // now let's see what we got
  temp = listhead;
  while (temp) {
    printf("list item: current is %p; next is %p; data is %d\n", temp, temp->next, temp->data);
    temp = temp->next;
  }

  return 0;
}
