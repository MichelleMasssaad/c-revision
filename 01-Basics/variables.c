#include <stdio.h>
#include <stdlib.h>

int main() {

  char name[] = "George";                         // array of char
  char names[][20] = {"George", "John", "Alice"}; // array of string
  int age = 35;

  printf("There once was a man named %s\n", names[0]);
  printf("He was %d years old\n", age);
  printf("He really liked the name %s\n", names[0]);
  printf("But he did not like being %d\n", age);

  return 0;
}
