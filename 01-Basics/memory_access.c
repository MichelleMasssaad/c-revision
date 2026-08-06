#include <stdio.h>
#include <stdlib.h>

int main() {
  int age = 30;
  double gpa = 3.4;
  char grade = 'A';

  printf("age: %p\ngpa: %p\n grade: %p", &age, &gpa, &grade);

  // if it was an array it would have been different , char name[50]="Michelle";
  // here name becimes the adress of the first character(&name[0])

  return 0;
}
