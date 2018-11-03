/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  switch statement
 *
 *        Version:  1.0
 *        Created:  11/02/2018 11:37:29 PM
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

  int x = 0;

  switch(x) {
    case 0:
      printf("x is false\n");
      break;

    case 1:
      printf("x is true\n");
      break;

    default: 
      printf("Something went wrong\n");
      break;
  }

  enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
  enum Weekday today = Monday;

  switch(today) {
    case Sunday:
      printf("Today is Sunday.\n");
      break;

    case Monday:
      printf("Today is Monday.\n");
      break;

    case Tuesday:
      printf("Today is Tuesday.\n");
      break;

    case Wednesday:
      printf("Today is Wednesday.\n");
      break;

    case Thursday:
      printf("Today is Thursday.\n");
      break;

    case Friday:
      printf("Today is Friday.\n");
      break;

    case Saturday:
      printf("Today is Saturday.\n");
      break;

    default:
      printf("Whatever...");
      break;
  }

  return 0;
}
