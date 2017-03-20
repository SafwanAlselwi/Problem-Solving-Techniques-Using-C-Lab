//Write a program to use macros as an array and pointer
#include<stdio.h>
#include<conio.h>

#define a(i) a[i]  //macros as an array
#define ptr *     //macros as a pointer
void main()
{
int n,i,a(100);
int ptr p = &a(0);
clrscr();

printf("\nEnter the number of Array Elements: ");
scanf("%d",&n);

printf("\nEnter %d numbers one by one:\n",n);
for(i=0;i<n;i++)
	scanf("%d",&a(i));

printf("\nArray Elements are:\n");
for(i=0;i<n;i++)
	printf("%d\t",a(i));

printf("\nThe squares of its numbers using pointer are:\n");
for(i=0;i<n;i++)
{
	printf("%d\t",ptr p * ptr p);
	p++;
}
getch();
}