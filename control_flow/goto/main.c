/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  goto
 *
 *        Version:  1.0
 *        Created:  11/02/2018 11:48:11 PM
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

// this code doesn't work - dont run it
int main() {

  char ch;
  
  top : ch = getchar();

  printf("ch = %c\n", ch);


  if (ch != 'y')
    goto top;
  else
    printf("Finished program.\n");

  return 0;
}

char getChar() {
  return 'y';
}
