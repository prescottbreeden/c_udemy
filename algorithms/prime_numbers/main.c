/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Generate Prime Numbers
 *
 *        Version:  1.0
 *        Created:  11/03/2018 04:23:39 PM
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
  _Bool isPrime;
  int primes[50] = { };
  int test;
  int pIndex = 0;

  for (int n = 2; n <= 100; n++) {
    isPrime = 1;
    test = n - 1;
    while (test != 1) {
      if (n % test == 0) {
        isPrime = 0;
      }
      test--;
    }
    if (isPrime == 1) {
      primes[pIndex] = n;
      pIndex++;
      printf("added %d to primes\n", n);
    }
  };
  return 0;
}
