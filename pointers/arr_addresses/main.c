/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  pointers with arrays
 *
 *        Version:  1.0
 *        Created:  11/17/2018 11:29:46 AM
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

int main(int argc, char **argv) {
  char str1[] = "Hello world";
  printf("%s %c %p %p %p\n", str1, str1[0], &str1, &str1[0], str1);
  for (int i = 0; i < sizeof(str1); i++) {
    printf("address for idx %d is: %d\n", i, &str1[i]);
  }
  return 0;
}
