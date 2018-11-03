/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  converting minutes to years or days
 *
 *        Version:  1.0
 *        Created:  11/02/2018 10:01:11 PM
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
  int minutesEntered = 0;
  double years = 0.0;
  double days = 0.0;
  double minutesInYear = 0;

  // get input from user
  printf("Please enter the number of minutes: ");
  scanf("%d", &minutesEntered);

  minutesInYear = (60 * 24 * 365);
  years = (minutesEntered / minutesInYear);
  days = minutesEntered/(60.0 * 24.0);

  printf("Approx years: %f, approx days: %f\n", years, days);

  return 0;
}
