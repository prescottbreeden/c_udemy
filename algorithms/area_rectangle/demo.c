/*
 * =====================================================================================
 *
 *       Filename:  demo.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/02/2018 01:00:07 AM
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
  double width = 32.3;
  double height = 15.3;
  double perimeter = 0.0;
  double area = 0.0;

  perimeter = 2.0 * (height + width);
  area = width * height;

  printf("Width is: %.2f, Height is: %.2f\n", width, height);
  printf("Perimeter is : %.2f\n", perimeter);
  printf("Area is : %.2f\n", area);

  return 0;
}

/* int main(int argc, char *argv[]) { */
/*   double width = atoi(argv[1]); */
/*   double height = atoi(argv[2]); */
/*   double perimeter = 0.0; */
/*   double area = 0.0; */

/*   perimeter = 2.0 * (height + width); */
/*   area = width * height; */

/*   printf("Width is: %.2f, Height is: %.2f\n", width, height); */
/*   printf("Perimeter is : %.2f\n", perimeter); */
/*   printf("Area is : %.2f\n", area); */
