/*
 * =====================================================================================
 *
 *       Filename:  gp_practice.c
 *
 *    Description:  practicing pointers
 *
 *        Version:  1.0
 *        Created:  11/17/2018 04:59:22 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <assert.h>

int main(int argc, char **argv) {

  int n; /* an int variable  */
  int *p; /* a pointer to an int */
  int **p2;

  n = 88;
  p = &n;
  p2 = &p;

  assert(p == &n);    // value of p == address of n
  assert(p2 == &p);   // value of p2 == address of p

  assert(*p == n);    // value of de-referenced p == n
  assert(**p2 == *p); // value of double-de-ref p2 == de-ref of p
  assert(**p2 == n);  // value of double-de-ref p2 == n

  assert(++(*p) == 89);   // increment the value pointed to by p

  printf("==============================\n");
  printf("ALL TESTS PASSED\n");
  printf("==============================\n");
  printf("Address of n: %p \n", p);
  printf("Address of p pointer: %p \n", &p);
  printf("Dereference p pointer of n: %d\n", *p);
  printf("------------------------------\n");
  printf("Address of p2 pointer: %p\n", &p2);
  printf("Dereference p2 pointer of p: %p\n", *p2);
  printf("Double Deref p2 pointer of p: %d\n", **p2);
  printf("------------------------------\n");


  
  return 0;
}
