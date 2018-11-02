/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  enums
 *
 *        Version:  1.0
 *        Created:  11/02/2018 01:08:40 AM
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
  enum company { GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT };
  enum company xerox = XEROX;
  enum company google = GOOGLE;
  enum company ebay = EBAY;


  printf("The value of xerox is: %i\n", xerox);
  printf("The value of google is: %i\n", google);
  printf("The value of ebay is: %i\n", ebay);

  return 0;
}


  /* enum company company1, company2, company3; */
  /* company1 = GOOGLE; */
  /* company2 = XEROX; */
  /* company3 = EBAY; */
