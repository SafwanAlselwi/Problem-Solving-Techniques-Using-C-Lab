/*Wirte a program to read three digits +ve integer
 'n' and generate possible permutations of number using their digits
*/
#include<stdio.h>
#include<conio.h>
void main(){

 int a[3],num,i;
 clrscr();

 printf("\nEnter Three Digit +ve Number: ");
 scanf("%d",&num);
 printf("\nEntere Number is : %d " , num);

 for(i=0 ; i<3 ; i++){
  a[i] = num%10;
  num /=10;  // num = num /10;
 }

 printf("\nPossible Permutations are :");
 printf("\n%d\t%d\t%d",a[0],a[1],a[2]);
 printf("\n%d\t%d\t%d",a[0],a[2],a[1]);
 printf("\n%d\t%d\t%d",a[1],a[2],a[0]);
 printf("\n%d\t%d\t%d",a[1],a[0],a[2]);
 printf("\n%d\t%d\t%d",a[2],a[1],a[0]);
 printf("\n%d\t%d\t%d",a[2],a[0],a[1]);

 getch();
}