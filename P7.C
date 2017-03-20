/*Write a C program to Enter a number and find the largest and smallest
digit of the number */

#include<stdio.h>
#include<conio.h>
void main()
{
 int n,min,max,rem;
 clrscr();

 printf("\nEnter the Number : ");
 scanf("%d",&n);

 max=min = n%10;

 while(n!=0)
 {
	rem = n%10;
	
	if(rem > max)
	   max = rem;

	if(rem < min)
  	   min = rem;
                
        n = n/10;
}

 printf("\nMax Digit is : %d",max);
 printf("\nMin Digit is : %d",min);

getch();
}
