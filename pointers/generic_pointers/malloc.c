/*
 * =====================================================================================
 *
 *       Filename:  malloc.c
 *
 *    Description:  memory allocation cont.
 *
 *        Version:  1.0
 *        Created:  11/17/2018 10:18:26 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
# define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*  very simple allocation of memory and changing something in the newly 
 *  allocated memory 
 */
int main() {
  char* s;
  int stringsize;

  stringsize = sizeof("hello");   // first work out how big "hello" is...
  printf("size of 'hello' is %d\n", stringsize);  
  // note that it is SIX bytes long (not five) because of the string terminator '\0'
  
  // now allocate some memory of sufficient size to hold the string
  // note that cast '(char*)' required because malloc returns a generic pointer
  s = (char*)malloc(stringsize);  
  if (s == NULL) {                // malloc will retun 0 (NULL) if it failed
    printf("malloc failed!\n");
    exit(0);
  }

  // now copy the string into the newly allocated memory
  strncpy(s, "hello", stringsize);

  // and change the first character (just to show that we can)
  printf("s is %s \n", s);
  s[0] = 'c';
  printf("s is %s \n", s);

  return 0;
}
