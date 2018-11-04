/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  calc weekly pay
 *
 *        Version:  1.0
 *        Created:  11/02/2018 11:57:42 PM
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

#define PAYRATE 20.00
#define TAXRATE_300 .15
#define TAXRATE_450 .20
#define TAXRATE_REST .25
#define OVERTIME 40


int main() {
  // declare variables
  int hours = 0;
  double grossPay = 0.0;
  double taxes = 0.0;
  double netPay = 0.0;

  // get input
  printf("please enter the number of hours worked this week:\n");
  scanf("%d", &hours);

  // calculate gross pay
  if (hours <= 40) {
    grossPay = hours * PAYRATE;
  }
  else {
    grossPay = hours * PAYRATE;
    double overTimePay = (hours - 40) * (PAYRATE * 1.5);
    grossPay += overTimePay;
  }
  
  // calculate taxes
  if (grossPay <= 300) {
    netPay = grossPay - (grossPay * TAXRATE_300);
  }
  else if (grossPay > 300 && grossPay <= 450) {
    netPay = grossPay - (grossPay * TAXRATE_450);
  }
  else {
    netPay = grossPay - (grossPay * TAXRATE_REST);
  }

  // show result
  printf("Your net pay is: %.2f\n", netPay);

  return 0;
}
