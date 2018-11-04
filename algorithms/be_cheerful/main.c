/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  be cheerful
 *
 *        Version:  1.0
 *        Created:  11/03/2018 21:07:07
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

void beCheerful() {
  printf("Good morning!");
}

int main() {
  int i;

  i = 0;

  do {
    beCheerful();
    i++;
  } while (i < 98);

}

