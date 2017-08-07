#include <stdio.h>

void main() {

int a,b,c,d,e,sum;

printf("---- Enter data ----\n");
printf("\n- Total miles per day: ");
scanf("%d", &a);
printf("\n- Gallon of gas cost: $ ");
scanf("%d", &b);
printf("\n- Average miles per galon: ");
scanf("%d", &c);
printf("\n- Parking cost: $ ");
scanf("%d", &d);
printf("\n- Road Tax per day: $ ");
scanf("%d", &e);

sum = e + d + ((a/c)*b);
printf("\n\nTotal price per day: %d\n", sum);
printf("--------------------\n");

}
