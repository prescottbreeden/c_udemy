/*
 * =====================================================================================
 *
 *       Filename:  allocating_memory.c
 *
 *    Description:  allocating memory
 *
 *        Version:  1.0
 *        Created:  11/17/2018 10:00:16 PM
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

#define MAXSTRLEN 100

char * string_function(char *astring) {
  char* s;
  s = (char*)malloc(MAXSTRLEN);

  /*
   * Malloc variables are stored on the heap, not the stack
   * - stack is cleared at end of function call
   * - heap is global
   */

  s[0] = 0;
  strcat(s, "Hello ");
  strcat(s, astring);
  strcat(s, "\n");
  return s;
}

int main(int argc, char **argv) {
  printf("%s", string_function("Fred"));
  printf("%s", string_function("Gussie Fink-Nottle"));

  /* char str1[] = "Hello world"; */
  /* printf("%s %c %d %d %d\n", str1, str1[0], &str1, &str1[0], str1); */

  return 0;
}
