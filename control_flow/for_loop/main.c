/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  for loops
 *
 *        Version:  1.0
 *        Created:  11/03/2018 10:41:59 AM
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

  int j = 2;

  for (int i = 1; i <=5; i++, j += 2) {
    printf("%5d", i*j);
  }

  j = 0;
  printf("\n");

  for (int i = 1; i <=5; ++i) {
    j+=2;
    printf("%5d", i*j);
  }

  printf("\n");

  return 0;

}
