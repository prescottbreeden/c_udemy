/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  casting
 *
 *        Version:  1.0
 *        Created:  11/02/2018 08:45:10 PM
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
  
  int a = (int)21.51; 
  int b = (int)26.99;
  int result = a + b;
  int int_size = sizeof(int);
  int float_size = sizeof(float);
  int bool_size = sizeof(_Bool);
  printf("Size of int: %i\n", int_size);
  printf("Size of float: %i\n", float_size);
  printf("Size of bool: %i\n", bool_size);
  printf("%i + %i = %i\n", a, b, result);

  return 0;
}
