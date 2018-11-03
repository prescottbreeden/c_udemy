/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Guess My Number
 *
 *        Version:  1.0
 *        Created:  11/03/2018 11:11:42 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Prescott Breeden
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
  int guess;
  int answer;
  int num_guess;
  time_t t;

  num_guess = 5;
  // initialize random number generator
  srand((unsigned) time(&t));

  // set answer to random number
  answer = rand() % 21;
  /* printf("Random number: %d\n", answer); */

  // game
  printf("This is a guessing game.\n");
  printf("I have chosen a number between 0 and 20 which you must guess\n");

  while (guess != answer && num_guess > 0) {
    printf("\n");
    printf("Youy have %d tries left.\n", num_guess);
    printf("Enter a guess: ");
    scanf("%d", &guess);
    num_guess--;

    if (guess > answer) {
      printf("Too high!\n");
    }
    else if (guess < answer) {
      printf("Too low!\n");
    }
    else {
      printf("You are amazing?! did you chear?\n");
    }

  }
  if (num_guess == 0) {
    printf("Sorry, you ran out of guesses\n");
    printf("The correct answer was: %d\n", answer);
  }

  printf("Thanks for playing!\n");

  return 0;
}

