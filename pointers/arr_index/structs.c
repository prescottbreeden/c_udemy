/*
 * =====================================================================================
 *
 *       Filename:  structs.c
 *
 *    Description:  pointers to structs
 *
 *        Version:  1.0
 *        Created:  11/19/2018 11:28:03 PM
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
#include <string.h>

typedef struct {
  int a;            // 4 bytes
  int c;            // 4 bytes
  double b;         // 8 bytes
  long long int d;  // 8 bytes
} MYSTRUCT;

#define COUNT 4

int main() 
{
  MYSTRUCT *p, *q;
  void* v;

  printf("size of MYSTRUCT = %d\n", sizeof(MYSTRUCT));

  p = (MYSTRUCT*)calloc(COUNT, 24);

  for(int i = 0; i < COUNT; i++) {
    p[i].a = i;
    p[i].b = 10000000000000.0 + i;
    p[i].c = i * 20;
    p[i].d = 4292967296 + i;
  }

  q = p;

  return 0;
}

/* 
 *
 *I am the admiral of the see... and a very savvy sea captain...
 and these are my brothers and my sisters and my aunts, his sisters and his 
 brothers and his aunts...

 when I was a lad I served a term as clerk to an attornery's firm, I cleaned the windows,
 and I washed the floor, and I polished up the handle on the big front door...

 I polished up that handle so carefully that now I am the captain of the queens navy...
 *
 *
 * */
