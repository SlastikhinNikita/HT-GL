/* 
* Define variable pc of pointer to unsigned char
* type and assign (with typedef) address of
* memset() function from <string.h> header file. Try
* to write value 0x90 to address stored in pc.
* What is happening? Why?
*/

#include <stdio.h>
#include <string.h>
	
int main(){


unsigned char *pc = 0;

memset(pc, 0x90, 4);

printf("\n\r %c \r\n", &pc);


	return 0;
}

