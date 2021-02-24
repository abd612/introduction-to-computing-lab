#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(void) {
  srand(time(NULL));

  int r = rand() % 1000 + 1;
  bool correct = false; 
  int guess; 
  int counter = 0; 
  printf("I have a number between 1 and 1000.\n Can you guess my number?\n Please type your first guess. ")
  ;while(!correct)
  {
    printf("Your guess:  "); 
    scanf("%d", &guess);
    getchar();

    if (guess < r) {
        printf("Your guess is too low. Guess again.\n")
    ;}
    else if (guess > r) { 
        printf("Your guess is too high. Guess again.\n");
    }
    else /* if (guess == r) */ {
        printf("You guessed correctly in %d tries! Congratulations!\n", counter); 
        correct = true; 
    }

    counter++;
  } /* while(!correct) */
  return 0;   
}
