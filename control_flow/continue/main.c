/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  continue
 *
 *        Version:  1.0
 *        Created:  11/03/2018 11:03:53 AM
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
  enum Day { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };
  
  for (enum Day day = Monday; day <= Sunday; day++) {
    printf("Day is: %d\n", day);
    if (day == Wednesday) {
      printf("Happy hump day?\n");
      continue;
    }
    if (day == Saturday) {
      printf("It's saturday... fuck it all\n");
      break;
    }
    printf("It's not Wednesday\n");
  }


  return 0;
}


