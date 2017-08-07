/* 
• Define variable pc of pointer to unsigned char
type and assign (with typecast) address of
memset() function from <string.h> header file. Try
to write value 0x90 to address stored in pc.
What is happening? Why?
• Declare pointer to the void *memset(void *s, int
c, size_t n) function with typedef. Define global
variable memset_s of such type with volatile
qualifier and assign address of memset() function
from <string.h> to it.
Call memset() via memset_s pointer in main() to
fill memset_s pointer with zeros (i.e. this
simulates memset_s = NULL statement). Print
memset_s value after filling to stdout with printf()
function.
• Implement following functions, similar to corresponding C
standard library functions:
size_t _strlen(const char *s);
size_t _strnlen(const char *s, size_t maxlen);
char *_strchr(const char *s, int c);
char *_strrchr(const char *s, int c)
First two takes pointer to ‘\0’ terminated string in s and
return number of symbols in string excluding ‘\0’,
_strnlen() also scans no more than maxlen bytes in s.
Last two search given symbol c in string s and return
pointer to it and NULL when no c is found in entire s,
_strrchr() starts search from right.
• Implement function size_t _strlcpy(char *d, const char *s,
size_t dsize) which copies no more than dsize - 1
characters from string s to d and ensures that string d
always terminated with '\0'. Function returns length of the
s.
• Implement functions char *_strtolower(char *s, size_t len)
and char *_strtoupper(char *s, size_t len), which converts
all upper/lower case chars in string to lower/upper case.
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


