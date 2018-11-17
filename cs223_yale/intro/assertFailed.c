/*
 * =====================================================================================
 *
 *       Filename:  assertFailed.c
 *
 *    Description:  debugging assertions
 *
 *        Version:  1.0
 *        Created:  11/17/2018 02:28:56 PM
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
#include <assert.h>

int main(int argc, char **argv)
{
  int x;

  x = 3;

  assert(x+x == 4);

  return 0;
}
