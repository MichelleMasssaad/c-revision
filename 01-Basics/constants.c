#include <stdio.h>
#include <stdlib.h>

int main() {
  int num = 5;
  printf("%d\n", num);
  num = 8;
  printf("%d\n", num);

  const int numero = 5;
  printf("%d", numero);
  /* cannot be modified lol*/

  printf("This message is also a constant!");

  return 0;
}
