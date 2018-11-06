/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Bubble sort
 *
 *        Version:  1.0
 *        Created:  11/05/2018 19:46:45
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

void printArr(int arr[]) {
  int i;
  for (i = 0; i < 10; i++) {
    printf("%5d", arr[i]);
  }
  printf("\n");
}

int main() {
  int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
  int i;
  int temp;
  _Bool sorted;
  _Bool changed;

  sorted = 0;
  i = 0;

  printArr(arr);

  while (sorted != 1) {
    printf("\nhere we go again...\n");
    printArr(arr);

    if (arr[i] > arr[i+1]) {
      changed = 1;
      temp = arr[i];
      arr[i] = arr[i+1];
      arr[i+1] = temp;
    }

    if (i == 9) {
      if (changed) {
        i = 0;
        printf("\nchanged is true\n");
      } 
      else {
        sorted = 1;
      }
    } 
    
    else {
      i++;
    }
  }

  printArr(arr);
  
  return 0;
}
