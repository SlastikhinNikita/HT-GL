/* 
* Create a function that will test if bit with given
* number is set (i.e. equal to 1) in specified value.
* Omit any error checking (e.g. given bit number
* less/greather than max possible for given value).
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int DecToBin(int num, int val)
{
	char *t = (char *)malloc(100);
	int i = 0;
	int k,m;
	char tmp;

	do
	{
		t[i++] = num % 2 + '0';
		num = num / 2;
	} while (num != 0);
	
	t[i] = '\0';
	k = strlen(t) - 2;
	m = k / 2;
	
	for (i = 0; i <= m; i++)
	{
		tmp = t[i];
		t[i] = t[k - i + 1];
		t[k - i + 1] = tmp;
	}

	
	if ( t[strlen(t)-val] == '1') 
	{ return 1;
		free(t);
	}
	else 
	{
		free(t);	
		return 0;
	}
}





/* FOR TEST RUN */

int main()
{
	int num;
	int val;


	printf("\nE NUM: \n");
	scanf("%d",&num);
	printf("\nE VAL: \n");
	scanf("%d",&val);
	printf("\n%d",DecToBin(num,val));


	return 0;
}


