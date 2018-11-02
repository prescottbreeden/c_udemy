/*
 * =====================================================================================
 *
 *       Filename:  variables.c
 *
 *    Description:  variables and data types
 *
 *        Version:  1.0
 *        Created:  10/31/2018 11:00:39 PM
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
  /*
   
  Primitive types:
  ================
    int
    float
    double
    char
    _Bool


    int x;
    int x, y, z;
    int x = 4, y = 5;
    int x, z = 94; <~~ valid but code smell - only x is initialized
    int rgb_color = 0xFFEF0D;

    float x = 0.1f;
    float x = 1.7e4f; <~~ 1.7 * 10^4

    double stores floats up to 64bits (floats only store 32bits)

   */

  int integerVar = 20;
  long scienceVar = 3e8L;
  float floatingVar = 1.789f;
  double doubleVar = 1.98e20d;
  _Bool boolVar = 0;
  short shorty = 32767;
  long longy = 2147483647;
  long longy2 = 2.14e9;

  enum primaryColor { red, yellow, blue };
  enum primaryColor myColor, gregsColor;
  myColor = red;
  gregsColor = blue;

  enum gender { male, female, other };
  enum gender myGender;
  myGender = male;

  char broiled = 'T';

  printf("integer var = %d\n", integerVar);
  printf("science var = %ld\n", scienceVar);
  printf("floating var = %.2f\n", floatingVar);
  printf("double var = %f\n", doubleVar);
  printf("bool var = %d\n", boolVar);
  printf("shorty vart = %d\n", shorty);
  printf("longy var = %ld\n", longy);
  printf("longy2 var = %ld\n", longy2);
  printf("gregsColor enum = %d\n", gregsColor);
  printf("broiled enum = %d\n", broiled);

  return 0;
}

