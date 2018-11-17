/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  intro to pointer
 *
 *        Version:  1.0
 *        Created:  11/17/2018 09:31:26 AM
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

int main(int argc, char **argv) 
{
  int num;
  int *numPtr;
  int num2;

  num = 100;
  numPtr = &num; // points to the address of num
  num2 = *numPtr; // uses the address of numPtr to get the data inside 

  printf("num=%d, numPtr=%p, address of num=%p, num2=%d\n", num, numPtr, &num, num2);

  return 0;
}
