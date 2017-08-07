/*
* (Palindrome Tester) A palindrome is a number or a text
* phrase that reads the same backward as forward. For
* example, each of the following five-digit integers is a
* palindrome: 12321, 55555, 45554 and 11611. Write a
* program that reads in a five-digit integer and determines
* whether or not it’s a palindrome.
*/

#include <stdio.h>


int strcheck(char *str1, char *str2){
  int i = 0;
  while(str1[i] != '\0' && str2[i] != '\0'){
    if(str1[i] != str2[i])
      return 0;
    i++;
  }
  if(str1[i] == '\0' && str2[i] == '\0')
    return 1;
  return 0;
}

int main()
{
	long int numbers;
	char arr1[4];
	char arr2[4];

	printf("Enter five digitals: ");
	while (scanf("%ld", &numbers) != 1)
	{
		while (getchar() != '\n');
		printf ("Try again enter you weight in kg: ");
	}

	
	sprintf(arr1,"%ld", numbers);
	arr2[0] = arr1[4];
	arr2[1] = arr1[3];
	arr2[2] = arr1[2];
	arr2[3] = arr1[1];
	arr2[4] = arr1[0];

	
if (strcheck(arr1,arr2))
{ 
printf("The number [%s] is PALINDROME!\n",arr1);
}
else
{
	printf("The number [%s] is NOT PALINDROME!\n",arr1);
	
}
	return 0;
}

