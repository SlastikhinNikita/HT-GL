#include <stdio.h>
#include <unistd.h>

int main(void)
{
	printf("Run main() and then run child\r\n");
	sleep(10);
	execl("./child.proc","child.proc", NULL);
/*
	fork("./child.proc");
*/
	printf("End of child!");
	sleep(10);	
	return 0;
}

