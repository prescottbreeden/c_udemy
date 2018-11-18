/*
 * =====================================================================================
 *
 *       Filename:  cl_args.c
 *
 *    Description:  command line args
 *
 *        Version:  1.0
 *        Created:  11/17/2018 03:24:09 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

/* This program displays any arguments that were passed to it */

int main(int argc, char **argv) {
  int i;

  // (1) iterate over array of args
  for (int i = 0; i < argc; i++) {
    printf("arg %d is %s\n", i, argv[i]);
  }

  printf("\n\n");

  /*
   * (2) de-reference each string arg (*argv) via pointer to the pointer
   * to the start of the array of args (**argv)
   */
  for (i = 0; i < argc; i++) {
    printf("arg %d is %s\n", i, *argv); // prints arg pointed to by argv
    argv += 1;
  }

  return 0;
}
