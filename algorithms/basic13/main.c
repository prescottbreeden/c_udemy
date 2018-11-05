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

void algo4() {
  int i;
  int start;
  int end;
  int count;

  start = 512;
  end = 4096;
  i = start;
  count = 0;

  while (i <= end) {
    if (i % 5 == 0) {
      printf("%5d", i);
      count++;
    }
    i++;
  }
  printf("\nTotal multiples of 5: %d\n", count);
}

int whatsThat(int x) {
  printf("That's: %d\n", x);
  return x;
}

void printOdd() {
  int end;
  int sum;
  end = 300000;
  for (int i = 1; i <= end; i += 2) {
    sum += i; 
  }
  sum *= 2;
  printf("Sum: %d\n", sum);
}

void printNums() {
  int start = 2016;
  int end = 1;

  while (start >= end) {
    printf("%5d", start);
    start -= 4;
  }
}

void flexCount(int lowNum, int highNum, int mult) {
  for (int i = highNum; i >= lowNum; i--) {
    if (i % mult == 0) {
      printf("%5d", i);
    }
  }
}

void finalCount(int param1, int param2, int param3, int param4) {
  int start = param2;
  int end = param3;
  if (start > end) {
    while (start > end) {
      if (start % param1 != param4) {
        if (start % param1 == 0) {
          printf("%5d", start);
        }
      } 
      start--;
    }
  }
  else {
    while (start < end) {
      if (start % param1 != param4) {
        if (start % param1 == 0) {
          printf("%5d", start);
        }
      } 
      start++;
    }
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

  algo4();

  printf("\n=======================\n");
  printf("\n");

  printOdd();  

  printf("\n=======================\n");
  printf("\n");

  printNums();  

  printf("\n=======================\n");
  printf("\n");

  flexCount(0, 10, 2);  

  printf("\n=======================\n");
  printf("\n");

  finalCount(2, 5, 100, 1);  

  printf("\n=======================\n");
  printf("\n");



  return 0;
}
