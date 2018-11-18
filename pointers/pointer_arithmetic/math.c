/*
 * =====================================================================================
 *
 *       Filename:  math.c
 *
 *    Description:  pointer math
 *
 *        Version:  1.0
 *        Created:  11/17/2018 11:24:40 PM
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

#define COUNT 4

int main() {
  int i;
  int *p;
  int a[COUNT];
  printf("size of an 'int' is %d\n", sizeof(int));

  for (i = 0; i < COUNT; i++) a[i] = i;
  p = a;
  printf("address of a is %p; value of p is %p [%d]; value that p points to is %d\n", a, p, p, *p);

  p = p + 1;
  printf("address of a is %p; value of p is %p [%d]; value that p points to is %d\n", a, p, p, *p);

  p = p + 2;
  printf("address of a is %p; value of p is %p [%d]; value that p points to is %d\n", a, p, p, *p);

  p = p + 1;
  printf("address of a is %p; value of p is %p [%d]; value that p points to is %d\n", a, p, p, *p);

  return 0;
}
