/* 
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
*/

#typedef void *memset(void *s, int c, size_t n) pt

#include <stdio.h>

void *memset(void *s, int
c, size_t n)

int main()
{


	printf("\nE NUM: \n");


	return 0;
}


