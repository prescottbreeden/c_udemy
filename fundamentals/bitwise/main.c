/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  bitwise operands
 *
 *        Version:  1.0
 *        Created:  11/02/2018 11:24:26 AM
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

  // 2 bits male/female
  // 3 bits Grench/German/Italian

  unsigned int a = 60;  // 0011 1100
  signed int b = 13;    // 0000 1101

  int result = a & b;   // 0000 1100
  int result2 = a | b;  // 0011 1101

  printf("a is: %i\n", a);
  printf("b is: %i\n", b);
  printf("result is: %i\n", result);
  printf("result2 is: %i\n", result2);

  int cat = 1;    // 0001
  int mouse = 2;  // 0010
  int duck = 4;   // 0100
  int goose = 8;  // 1000

  int my_pets = 5;        // 0101
  int grahams_pets = 12;  // 1100

  if (grahams_pets & cat) {
    printf("You have a cat\n");
  } else {
    printf("You do not have a cat\n");
  };

  if (grahams_pets & mouse) {
    printf("You have a mouse\n");
  } else {
    printf("You do not have a mouse\n");
  };

  if (grahams_pets & duck) {
    printf("You have a duck\n");
  } else {
    printf("You do not have a duck\n");
  };

  if (grahams_pets & goose) {
    printf("You have a goose\n");
  } else {
    printf("You do not have a goose\n");
  };

  return 0;
}
