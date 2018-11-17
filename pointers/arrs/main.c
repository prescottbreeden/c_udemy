/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Arrays, addresses and pointers
 *
 *        Version:  1.0
 *        Created:  11/17/2018 11:41:21 AM
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

int main (int argc, char **argv) {
  char str1[] = "Hello";
  char *str2 = "Goodbye";
  /* str2 = str1; */
  printf("%d %d %s\n", &str1, str1, str1);
  printf("%d %d %s\n", &str2, str2, str2);

  return 0;
}
