/*
 * =====================================================================================
 *
 *       Filename:  cray.c
 *
 *    Description:  lets get nutty
 *
 *        Version:  1.0
 *        Created:  11/21/2018 11:27:56 AM
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

struct {
  int ***ippp;
  int **ipp;
  int *ip;
  int i;
} p;

// this shows pointers pointing to other pointers
// and should be used in conjunction with the memory window

int main(int ac, char**av) {
  p.ippp = &p.ipp;
  p.ipp = &p.ip;
  p.ip = &p.i;
  p.i = 0x55555555;

  return 0;
}
