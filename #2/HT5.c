/*
* (Find the Smallest) Write a program that finds the
* smallest of several integers. Assume that the first value
* read specifies the number of values remaining.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int coutNumbers, number, i, min;

	size_t array_length;
	int *arrayNumbers;

	
	
	
	

	
	printf("How many numbers?: ");
	while (scanf("%i", &coutNumbers) != 1)
	{
		while (getchar() != '\n');
		printf ("Try again enter number: ");
	}
	array_length = coutNumbers;
	
	arrayNumbers = malloc(array_length * sizeof *arrayNumbers);
	
	
	for (i = 0; i < coutNumbers; i++)
	{
		printf("Enter number #%i: ",i+1);
		while (scanf("%i", &number) != 1)
		{
			while (getchar() != '\n');
			printf ("Try again enter number: ");
		}


		if(arrayNumbers != NULL)
		{
			arrayNumbers[i] = number;
		}		
	}
	
	min=arrayNumbers[0];
	for (i = 1; i < coutNumbers; i++)
	{
		if (arrayNumbers[i] < min) min = arrayNumbers[i];
		
	}

	

	printf("\nThe number [%i] is smallest!\n",min);

	return 0;
}

