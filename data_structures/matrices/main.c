/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  multi-dimensional arrays
 *
 *        Version:  1.0
 *        Created:  11/03/2018 03:52:47 PM
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

  int matrix[4][5];
  int numbers[3][4] = {
    {  },
    {  },
    {  }
  };
  int values[2][4] = {
    { 0, 1, 2, 3 },
    { 4, 5, 6, 7 }
  };
  int threeDimensional[10][20][5] = {};

  printf("================\n");
  printf("Matrix[4][5]\n");
  printf("================\n");

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 5; j++) {
      printf("%15d", matrix[i][j]);
    }
    printf("\n");
  }

  printf("================\n");
  printf("numebrs[3][4]\n");
  printf("================\n");

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%5d", numbers[i][j]);
    }
    printf("\n");
  }

  printf("================\n");
  printf("values[2][4]\n");
  printf("================\n");

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%5d", values[i][j]);
    }
    printf("\n");
  }

  printf("================\n");
  printf("threeDimensional[10][20][5]\n");
  printf("================\n");

  for (int i = 0; i < 10; i++) {
    printf("\n======== %d ========\n", i);
    for (int j = 0; j < 20; j++) {
      printf("\n--------- %d --------\n", j);
      printf("\n---start of stack---\n");
      for (int k = 0; k < 5; k++) {
        printf("%5d", k);
      }
    }
    printf("\n");
  }

  return 0;
}
