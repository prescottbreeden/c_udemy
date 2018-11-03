/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  displayh basic byte sizes of data types in C
 *
 *        Version:  1.0
 *        Created:  11/02/2018 10:17:23 PM
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

  printf("Int: %zd\n", sizeof(int));
  printf("Char: %zd\n", sizeof(char));
  printf("Short: %zd\n", sizeof(short));
  printf("Long: %zd\n", sizeof(long));
  printf("Long Long: %zd\n", sizeof(long long));
  printf("Float: %zd\n", sizeof(float));
  printf("Double: %zd\n", sizeof(double));
  printf("Long Double: %zd\n", sizeof(long double));

  return 0;
}
