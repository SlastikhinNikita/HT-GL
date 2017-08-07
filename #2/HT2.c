/*
* Write a program that inputs three different integers from the keyboard, 
* then prints the sum, 
* the average, 
* the product, 
* the smallest 
* and the largest of these numbers.
*/

#include <stdio.h>


int main()
{
	int	 a,b,c;
	float temp = 0;
	int max,min;

	printf("remark: \t You can enter three numbers through a space.\n");
	printf("Enter [first] number: ");
	while (scanf("%i", &a) != 1)
	{
		while (getchar() != '\n');
		printf ("Try again enter [first] number: ");
	}

	
	printf("Enter [second] number: ");
	while (scanf("%i", &b) != 1)
	{
		while (getchar() != '\n');
		printf ("Try again enter [second] number: ");
	}

	printf("Enter [third] number: ");
	while (scanf("%i", &c) != 1)
	{
		while (getchar() != '\n');
		printf ("Try again enter [third] number: ");
	}

	
	
	
	
	printf("\nSum is: %d", a+b+c);
	
	temp = (float)(a + b + c)/3;
	printf("\nAverage is: %.2f", temp);
	
	printf("\nProduct is: %d", a*b*c);	
	
	
	
	
	max=a;
	min=a;
	
	if(b>max){
		max=b;
	}else if(b<min){
		min=b;
	}
	if(c>max){
		max=c;
	}else if(c<min){
		min=c;
	}

	printf("\nMax number: %d \nMin number: %d\n", max,min);	
	
	
	

	return 0;
}

