/*
* Write a program that reads in two integers 
* and determines and prints if the first is 
* a multiple of the second.
*/

#include <stdio.h>


int main()
{
	int a,b;


	printf("remark: \t You can enter three numbers through a space.\n");
	printf("Enter first number: ");

	while (scanf("%i", &a) != 1)
	{
		while (getchar() != '\n');
		printf ("Try again enter first number: ");
	}

	printf("Enter second number: ");

	while (scanf("%i", &b) != 1)
	{
		while (getchar() != '\n');
		printf ("Try again enter second number: ");
	}



	if ( a%b == 0) {
		printf ("Number %d is multiple to number %d\n", a, b);
	} else
	{
		printf ("Number %d is NOT multiple to number %d\n", a, b);	
	}
	

	return 0;
}

