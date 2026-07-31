#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {

  char name[50];
  char major[50];
  int age;
  double gpa;
};

int main() {

  struct Student stud1;
  stud1.age = 22;
  stud1.gpa = 3.2;
  strcpy(stud1.name, "Jim");
  strcpy(stud1.major, "Business");

  printf("%f\n", stud1.gpa);
  printf("%s\n", stud1.name);

  return 0;
}
