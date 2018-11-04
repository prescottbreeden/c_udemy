/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  set and swap variables
 *
 *        Version:  1.0
 *        Created:  11/03/2018 21:03:50
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

int main() {

  int x;
  int y;
  int temp;

  x = 10;
  y = 20;

  printf("x is: %d\n", x);
  printf("y is: %d\n", y);

  temp = x;
  x = y;
  y = temp;

  printf("x is: %d\n", x);
  printf("y is: %d\n", y);

  return 0;
}
