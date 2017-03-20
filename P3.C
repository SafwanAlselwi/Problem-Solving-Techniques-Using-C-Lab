//Write a program to check weither an entered number is a prime or not
#include <conio.h>
#include <stdio.h>

void main()
{
int i,num,c;
c=0;
clrscr();

printf("\nEnter the number to check:\t");
scanf("%d",&num);

for (i=1 ; i<=num ; i++)
{
     if(num%i == 0)
          c++;
}

if (c==2)
     printf("(%d) is a prime number",num);
else
     printf("(%d) is not a prime number",num);


getch();
}
