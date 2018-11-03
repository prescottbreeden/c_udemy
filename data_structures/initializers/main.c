/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  initializers
 *
 *        Version:  1.0
 *        Created:  11/03/2018 03:38:11 PM
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
  int array[10];
  int test[10] = {  };
  int counters[5] = { 0, 0, 0, 0, 0 };
  float sample_data[500] = { [2] = 500.5, [1] = 300.0, [0] = 100.0 };
  float sample_data2[500] = { 500.5, 300.0, 100.0 };

  printf("================\n");
  printf("Array[10]\n");
  printf("================\n");

  for (int i = 0; i < 10; i++) {
    printf("%d\n", array[i]);
  }

  printf("================\n");
  printf("Test[10]\n");
  printf("================\n");

  for (int i = 0; i < 10; i++) {
    printf("%d\n", test[i]);
  }
  printf("================\n");
  printf("counters[5]\n");
  printf("================\n");

  for (int i = 0; i < 5; i++) {
    printf("%d\n", counters[i]);
  }

  printf("================\n");
  printf("sample_data[500]\n");
  printf("================\n");

  for (int i = 0; i < 20; i++) {
    printf("%.2f\n", sample_data[i]);
  }

  printf("================\n");
  printf("sample_data[500]\n");
  printf("================\n");

  for (int i = 0; i < 20; i++) {
    printf("%.2f\n", sample_data2[i]);
  }

  return 0;
}
