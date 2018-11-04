/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  basic13 algos
 *
 *        Version:  1.0
 *        Created:  11/03/2018 21:22:03
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

void algo1() {
  int i;
  int min = -300;
  int max = 300;

  for (i = min; i < max; i++) {
    if (i % 3 == 0) {
      if (i == -3 || i == -6) {
        continue;
      }
      printf("%5d", i);
    }
  }
}

void algo2() {
  int i;
  int start;
  int end;

  start = 2000;
  end = 5280;
  i = start;

  while (i <= end) {
    printf("%5d", i);
    i++;
  }
}

void algo3(int param1, int param2) {
  int day;
  int month;

  day = 1;
  month = 3;

  if ( (param1 == day && param2 == month) || 
       (param1 == month && param2 == day) ) {
    printf("How did you know?!\n");
  }
  else {
    printf("hmph... just another day...\n");
  }
}

void leapYear(int year) {
  if (year % 4 == 0 && year % 100 != 0) {
    printf("ermagerd a leap year!\n");
  }
  else {
    printf("zzzzzz....\n");
  }
}

int main() {

  printf("\n");
  printf("\n=======================\n");
  
  algo1();

  printf("\n");
  printf("\n=======================\n");
  printf("\n");

  algo2();

  printf("\n");
  printf("\n=======================\n");
  printf("\n");

  algo3(3, 6);
  algo3(3, 1);
  algo3(1, 3);

  printf("\n=======================\n");
  printf("\n");

  for (int i = 1983; i < 2021; i++ ) {
    leapYear(i);
  }

  printf("\n=======================\n");
  printf("\n");

  return 0;
}
