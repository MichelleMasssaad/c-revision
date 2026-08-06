#include <stdio.h>
#include <stdlib.h>

int main() {

  FILE *fpointer = fopen("employees.txt", "a");
  // w to write if the file doesnt exist it creates if it does it deletes it and
  // starts over , a to append , r to read the file should alreadyy exist

  fprintf(
      fpointer,
      "Jimmy, Salesman\nPam, Receptionist\nOscar, Accounting\nMichelle, IT");

  fprintf(fpointer, "\nJossy,Customer Service");

  fclose(fpointer);

  return 0;
}
