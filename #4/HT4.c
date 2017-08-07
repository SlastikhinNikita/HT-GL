/* 
   • Implement function size_t _strlcpy(char *d, const char *s,
   size_t dsize) which copies no more than dsize-1
   characters from string s to d and ensures that string d
   always terminated with '\0'. Function returns length of the
   s.
 */

#include <stdio.h>



size_t _strlcpy(char *d, const char *s, size_t dsize);


int main()
{
	char D_String[] = "Hello World!";
	char S_String[] = "242222";
	size_t dsize = 5;
	size_t len;

	len = _strlcpy(D_String, S_String, dsize);

	printf("\n%s\n", D_String);
	printf("\nlen: %lu\n",len);



	return 0;
}

size_t _strlcpy(char *d, const char *s, size_t dsize)
{
	size_t nleft = dsize;

	if (nleft != 0) {
		while (--nleft != 0) {
			if ((*d++ = *s++) == '\0')
				break;
		}
	}

	if (nleft == 0) {
		if (dsize != 0) *d = '\0';
		while (*s++);
	}

	return(d - s);
}
