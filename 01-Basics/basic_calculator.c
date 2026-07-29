#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{

	double num1;
	double num2;
	char operator;
	double res;


	printf("Enter first number: ");
	scanf("%lf" , &num1);	
	printf("Enter second number: ");
	scanf("%lf" , &num2);

	printf("Choose one of the following operators + - * / : ");
	scanf(" %c",&operator);

	switch(operator)
	{
		case '+':
			res=num1+num2;
			break;

		case '-':
			res=num1-num2;
			break;

		case '*':
			res=num1*num2;
			break;

		case '/':
			res=num1/num2;
			break;
	}




	printf("Answer is: %lf", res);

	return 0;
}

