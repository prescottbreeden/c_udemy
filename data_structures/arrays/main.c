/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  arrays
 *
 *        Version:  1.0
 *        Created:  11/03/2018 01:38:50 PM
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
  int count = 10;
  int grades[count];
  long sum = 0;
  float average = 0.0f;

  for (int i = 0; i < count; i++) {
    printf("%2u> ", i + 1);
    scanf("%d", &grades[i]);
    sum += grades[i];
  }

  average = (float)sum/count;
  printf("Avg is: %.2f\n", average);

  return 0;
}
