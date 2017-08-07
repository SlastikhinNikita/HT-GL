#include <stdio.h>
#include <math.h>


int main()
{
int x;

for(;x < 20; x++)
{
	if (x > 0) printf("%d ",x);
	if (x % 5 == 0) printf("\n");		
}

return 0;
}

