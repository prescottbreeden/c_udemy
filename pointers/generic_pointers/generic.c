/*
 * =====================================================================================
 *
 *       Filename:  generic.c
 *
 *    Description:  generic pointers
 *
 *        Version:  1.0
 *        Created:  11/17/2018 04:48:58 PM
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

int data[LENGTH];
char* words[LENGTH];

int main(int argc, char **argv) {
  void *gp;     // a generic pointer

  puts("generic pointer example...\n");

  // initialize our integer array
  for (int i = 0; i < LENGTH; i++) {
    data[i] = i;
  }
  for (int i = 0; i < LENGTH; i++) {
    printf("%d\n", data[i]);
  }

  // initialize our string array
  words[0] = "'zero'";
  words[1] = "'one'";
  words[2] = "'two'";
  for (int i = 0; i < LENGTH; i++) {
    printf("%s\n", words[i]);
  }

  /* 
   * C: example of a generic pointer
   */

  gp = data;      // set the generic pointer to the array and print it out
  printf("\ndata array address is %p\n", gp);

  // now print out the first item in the array
  // - note: a cast is now needed to let the compiler know what sort of thing is being poitned at
  printf("item pointed to by gp is %d\n", *(int*)gp);

  // the cast tells the compiler what the address type is and so we can do addition like so:
  gp = (int*)gp + 1;
  printf("item pointed to by gp is now %d\n", *(int*)gp);

 
  gp = (int*)gp + 1;
  printf("item pointed to by gp is now %d\n", *(int*)gp);


  gp = words;
  printf("\nwords array address is %p\n", gp);

  // now print out the first item in the array
  // - note: a cast is now needed to let the compiler know what sort of thing is being poitned at
  printf("item pointed to by gp is %s\n", *(char**)gp);

  // the cast tells the compiler what the address type is and so we can do addition like so:
  gp = (char**)gp + 1;
  printf("item pointed to by gp is now %s\n", *(char**)gp);

  gp = (char**)gp + 1;
  printf("item pointed to by gp is now %s\n", *(char**)gp);


  return 0;
}
