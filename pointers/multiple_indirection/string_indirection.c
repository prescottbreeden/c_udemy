/*
 * =====================================================================================
 *
 *       Filename:  string_indirection.c
 *
 *    Description:  string indirections
 *
 *        Version:  1.0
 *        Created:  11/17/2018 03:01:58 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

#define LENGTH 3

char *words[LENGTH];    // some strings

int main(int argc, char **argv) {
  char *pc;     // a pointer to a character
  char **ppc;   // a pointer to a pointer to a character

  printf("multiple inderection example \n");

  // initialize our string array
  words[0] = "zero";
  words[1] = "one";
  words[2] = "two";
  for (int i = 0; i < LENGTH; i++) {
    printf("%s\n", words[i]);
  }

  /* 
   * B: a pointer to an array of strings
   *    - the same as a pointer to a pointer to a character
   *
   */
  puts("\n Now print the chars in each string... \n");
  ppc = words;                        // initialize the pointer to a pointer to a char
  for (int i = 0; i < LENGTH; i++) {  // loop over each string
    ppc = words + i;
    pc = *ppc;
    while (*pc != 0) {                // process each character in a string
      printf("%c ", *pc);             // print out each character of the string individually
      pc += 1;
    }
    printf("\n");
  }

  return 0;
}
