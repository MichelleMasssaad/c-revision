#include <stdio.h>
#include <stdlib.h>

int main() {
  int secretNumber = 5;
  int guess;
  int guess_limit = 3;

  while (guess != secretNumber && guess_limit != 0) {
    printf("Enter a number: ");
    scanf("%d", &guess);
    guess_limit--;
  }

  if (guess_limit == 0) {
    printf("YOU LOSE!");
    return 0;
  }

  printf("YOU WIN!");
}
