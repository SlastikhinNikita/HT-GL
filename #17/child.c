#include <stdio.h>
#include <unistd.h>
int main(void)
{
	int i  = 0;
	while(i < 10){
		printf("Hello, World!\r\n");
		sleep(1);
i++;
	}
	return 0;
}

