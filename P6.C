/*
write a 'c' Program to find the sum of its individual
digits repeatedly till the result is a single digit */

#include<stdlib.h>
#include<conio.h>
void main()
{
int n,rem,sum=0;

printf("\nPlease Enter two digts number:\t");
scanf("%d",&n);

while(n>=10)
{
	while(n !=0)
	    {
		rem =  n%10;
		sum += rem;
		n = n/10;
		}
	if(sum > 9)
	{
	n = sum;
	sum = 0;
	}
}

printf("\nSum = %d", sum);

getch();
}