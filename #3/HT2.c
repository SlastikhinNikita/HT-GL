/*
* Create a function that takes two parameters: val
* and mask and clears all bits in val which are set in
* mask.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char * DecToBin(int num)
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

	return t;

}





int main()
{
	char *Arrr = (char *)malloc(100);
	int value = 0;
	char mask[100];
	char *result = (char *)malloc(100);
	int i;

	
	
	printf("\nEnter the value: ");
	scanf("%d",&value);
	
	Arrr = DecToBin(value);
	
	printf("%s",Arrr);
	
	do {
	printf("\nEnter the mask of [%d] bits:",(int)strlen(Arrr));
	scanf("%s",mask);
	} while ((int)strlen(Arrr) != (int)strlen(mask));
	
	

	i = 0;
	do {
		
		result[i] = Arrr[i] & mask[i];		
		
		i++;
	} while (i < (int)strlen(mask));

	printf("\nResult: %s\n",result);
	
	free(Arrr);
	free(result);
	
	return 0;
}

