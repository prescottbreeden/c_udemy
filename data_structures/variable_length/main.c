/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  variable length arrays
 *
 *        Version:  1.0
 *        Created:  11/03/2018 04:16:55 PM
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

  int n = 5;
  int m = 8;
  float a1[5] = {};           // yes
  float a2[5*2 + 1];          // yes
  float a3[sizeof(int) + 1];  // yes
  float a4[-4];               // no, size must be > 0
  float a5[0];                // no, size must be > 0
  float a6[2.5];              // no, size must be an integer
  float a7[(int)2.5];         // yes, typecast float to int
  float a8[n];                // not allowed before c99, VLA
  float a9[m];                // not allowed before c99, VLA

  return 0;
}
