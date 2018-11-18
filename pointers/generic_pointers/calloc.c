/*
 * =====================================================================================
 *
 *       Filename:  calloc.c
 *
 *    Description:  calloc - clear allocation (inserts null)
 *
 *        Version:  1.0
 *        Created:  11/17/2018 10:32:41 PM
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
  int i;
  char* s;
  int* p;

  // use malloc first to allocate some memory and see what is in it (usually rubbish...)
  s = (char*)malloc(6);
  for (i = 0; i < 6; i++) printf("s[%d]=%d\n", i, s[i]);
  free(s);
  printf("\n");

  // now we'll use calloc to do the same - note that the memory is 'zeroed out'
  s = (char*)calloc(6, sizeof(char));
  for (i = 0; i < 6; i++) printf("s[%d]=%d\n", i, s[i]);
  free(s);
  printf("\n");

  // in this last example, 'calloc' allocates 6 integers, or 24 bytes, 
  // since an integer is 4 bytes
  p = (int*)calloc(6, sizeof(int));
  for (i = 0; i < 6; i++) printf("p[%d]=%d\n", i, p[i]);
  free(p);

  return 0;
}
