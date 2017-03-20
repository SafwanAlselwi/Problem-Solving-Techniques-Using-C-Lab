//Write a C program to demonstrate all operators.

#include<stdio.h>
#include<conio.h>
void main()
{

 float num1,num2;
 float sum=0.0,sub=0.0,mul=0.0,div=0.0;
 float inc=0.0,dec=0.0;
 clrscr();
 printf("\nEnter Number1&2 : ");
 scanf("%f %f",&num1,&num2);
 sum = num1+num2;
 sub = num1-num2;
 mul = num1*num2;
 div = num1/num2;
 inc = ++num1;
 dec = --num2;

 printf("\nAfter Calculation");
 printf("\nSum = %.3f",sum);
 printf("\nSub = %.3f",sub);
 printf("\nMul = %.3f",mul);
 printf("\nDiv = %.3f",div);
 printf("\nInc = %.3f",inc);
 printf("\nDec = %.3f",dec);

 getch();
}
