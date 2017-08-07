/*
* (Calculating the Value of π) Calculate the value of π from
* the infinite series
*          4     4     4     4     4
* π = 4 - --- + --- - --- + --- - --- + ...
*          3     5     7     9     11      
*/

#include <stdio.h>


int main()
{
	int n,i;
	float Pi;

	
	printf("How many numbers on Pi: ");
	while (scanf("%i", &n) != 1)
	{
		while (getchar() != '\n');
		printf ("Try again enter numbers: ");
	}	


	Pi = 4.0;
	
	
	for(i=1;i<=n;i=i+4){
		
		Pi = Pi - ((float)4/(float)(i+2));
		printf("\nPi = %f        ,%i\n",Pi, i+2);
		Pi = Pi + ((float)4/(float)(i+4));
		printf("\nPi = %f        ,%i\n",Pi, i+4);
	}
	
	printf("\nPi = %f\n",Pi);

	
	return 0;
}

