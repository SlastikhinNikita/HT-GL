#include <stdio.h>

int main()
{
int sum = 0;
int count = 0;
int i = 0;

for(i=0;i<99;i++)
{
if(i%2==0){
sum=sum + i;
count++;
}
}
printf("\nSum: %d Count: %d\n", sum, count);


return 0;
}

