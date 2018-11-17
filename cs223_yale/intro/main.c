/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  creating a program
 *
 *        Version:  1.0
 *        Created:  11/17/2018 01:54:16 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

/* print the numbers from 1 to 10 */

int
main(int argc, char **argv)
{
  int i;

  puts("Now I will count from 1 to 10");
  for (i = 1; i <= 10; i++) {
    printf("%d\n", i);
  }

  return 0;
}
