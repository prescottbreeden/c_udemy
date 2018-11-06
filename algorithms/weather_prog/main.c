/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Weather Challenge
 *
 *        Version:  1.0
 *        Created:  11/05/2018 11:13:16
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

#define MONTHS 12
#define YEARS 5

int main() {

  // rainfall data 2010-2014
  float rainfall[YEARS][MONTHS] = { 
    { 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 4.2, 2.4, 3.5, 6.9 },
    { 2.4, 3.8, 7.2, 1.8, 4.2, 1.2, 0.1, 0.5, 6.2, 2.4, 3.8, 6.1 },
    { 4.3, 4.3, 1.0, 2.0, 1.2, 0.0, 0.1, 0.3, 5.3, 3.4, 4.9, 5.6 },
    { 4.3, 1.3, 1.0, 3.0, 2.2, 0.2, 0.3, 0.2, 5.2, 2.4, 4.5, 4.6 },
    { 4.2, 1.2, 2.0, 5.0, 1.2, 0.0, 0.4, 0.2, 4.2, 1.4, 3.1, 7.6 }
  };

  int year, month;
  float subtotal, total;

  printf("YEAR\t\tRAINFALL (inches)\n");
  for (year = 0, total = 0; year < YEARS; year++) {
    for (month = 0, subtotal = 0; month < MONTHS; month++) {
      subtotal += rainfall[year][month];
    }
    printf("%5d \t\t%15.1f\n", 2010 + year, subtotal);
    total += subtotal;
  }
  printf("\nThe yearly average is %.1f inches.\n\n", total/YEARS);

  return 0;
}
