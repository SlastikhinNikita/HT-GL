#include <stdio.h>

void main(){

int a, b;

printf("\n----------   S T A R T   ----------\n\n");
printf("Enter first number:");
scanf("%d", &a);
printf("Enter second number:");
scanf("%d", &b);


printf("\n\n---------- R E S U L T S ----------\n\n");
printf("Sum is: %d \n", a+b);
printf("Product is: %d \n", a*b);
printf("Difference is: %d \n", a-b);
printf("Quotient: %d and Remainder: %d ",a/b,((int)(a)%(int)(b)));


printf("\n\n-----------------------------------\n");


}
