#include <stdio.h>
#include <math.h>


int main()
{
int x;
printf("\n");

do{
	x++;
	printf("%d ",x);
	if (x % 5 == 0) printf("\n");	
}
while(x != 20);


return 0;
}

