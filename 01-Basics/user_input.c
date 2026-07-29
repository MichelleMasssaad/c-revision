#include <stdio.h>
#include <stdlib.h>

int main()
{

	int age;
	double gpa;
	char grade;
	char name[20];

	printf("Enter your age: ");
	scanf("%d", &age );
	printf("You are %d years old\n", age);

	printf("What's your gpa: ");
	scanf("%lf", &gpa);
	printf("Your gpa is %lf\n", gpa);

	//Unlike %d and %lf, %c does NOT skip whitespace 
	//so hon ba3d fi bel buffer \n 
	//et %c wont skip it so it wont take input from user it will print!
	//to fix we just put space before %c
	printf("What's your C exam grade: ");
	scanf(" %c", &grade);
	printf("Your C exam grade is %c\n",grade);

	printf("What's your name: ");
	//scanf(" %s" , name); //no need for pointer strings are pointers cest des tableaux
	
	getchar(); //CONSUMES LEFTOVER \N
	fgets(name, 20, stdin);
	printf("Your name is %s\n",name);

	return 0;
}
