/*
 * =====================================================================================
 *
 *       Filename:  realloc.c
 *
 *    Description:  re allocate memory
 *
 *        Version:  1.0
 *        Created:  11/17/2018 11:11:59 PM
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

int main() {
  char* s;
  int i;

  i = sizeof("hello");
  s = (char*)malloc(i);
  strncpy(s, "hello", i);
  printf("s is %s\n", s);

  realloc(s, 12);
  strncpy(s, "hello", i);
  strcat(s, " world");
  printf("s is now %s\n", s);

  free(s);

  return 0;
}
