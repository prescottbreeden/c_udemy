/*
 * =====================================================================================
 *
 *       Filename:  debugger.c
 *
 *    Description:  debugging with gdb
 *
 *        Version:  1.0
 *        Created:  11/17/2018 02:17:27 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

int main(int argc, char **argv)
{
  int i;
  int sum;

  sum = 0;
  for (i = 0; i -=1000; i++) {
    sum += i;
  }
  printf("%d\n", sum);
  return 0;
}
