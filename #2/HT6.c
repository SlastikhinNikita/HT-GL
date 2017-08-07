/*
* (Factorial) Write a program that estimates the value of
* the mathematical constant e by using the formula:
*          1     1     1           1
* e = 1 + --- + --- + --- + ... + --- + ...
*          1!    2!    3!          n!
*/

#include <stdio.h>


int main()
{
	int l,i,n;
	float e,p;

	e=1;
	p=1;

	printf("How many numbers on factorial: ");
	while (scanf("%i", &n) != 1)
	{
		while (getchar() != '\n');
		printf ("Try again enter numbers: ");
	}	
	
	for(i=1;i<=n;i++)
	{
		for(l=i;l>=1;l--)
		{
			p *= l;

		}

		e += 1/p;
		p=1;

	} 
	
	printf("\n E = %f\n", e);
	
	
	return 0;
}

