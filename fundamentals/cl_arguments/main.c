/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Passing arguments from the command line
 *
 *        Version:  1.0
 *        Created:  11/01/2018 03:08:59 PM
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
  // argc = argument count - integer value that specifies number of arguments
  // argv = argument vector - array of character pointers (strings)

  int num_args = argc;
  char *argument1 = argv[0];
  char *argument2 = argv[1];

  printf("Number of arguments: %d\n", num_args);
  printf("Argument 1 is the program name: %s\n", argument1);
  printf("Argument 2 is the command line argument: %s\n", argument2);

  return 0;
}
