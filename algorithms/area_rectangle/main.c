/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  display the perimeter and area of a rectangle
 *
 *        Version:  1.0
 *        Created:  11/01/2018 03:20:06 PM
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

int main(int argc, char *argv[]) {

  int width = *argv[1] - '0';
  int height = *argv[2] - '0';
  int perimeter;
  int area;

  perimeter = width*2 + height*2;
  area = width * height;
  printf("Width: %i, Height: %i, Perimeter: %i, Area: %i\n", 
          width, height, perimeter, area);
  return 0;
}
