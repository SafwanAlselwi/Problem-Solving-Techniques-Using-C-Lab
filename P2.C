/* Write a C program for electricity bill tracking different categories
of users, different bbs in each category */

#include<stdio.h>
#include<conio.h>

void main()
{

int n,cr,pr;
static int mno;
char utype;
float bill=0.0;


printf("\n**********************************************");
printf("\n****** Electricity Bill Calculation **********");
printf("\n**********************************************");

printf("\n\t Enter Meter's Number  : ");
scanf("%d",&mno);

printf("\n\t Enter Current Reading : ");
scanf("%d",&cr);
printf("\n\t Enter Previous Reading: ");
scanf("%d",&pr);

n = cr-pr;

printf("\n ******************MENU*********************");
printf("\n\t Enter D for Domestic User : ");
printf("\n\t Enter the Type of the User: ");
scanf("%s",&utype);

if(utype == 'D' || utype == 'd')
{
	if (n>0 && n<=200)
		bill = n * 0.50;
	else if (n>200 && n <=400)
		bill = 100 + n * 0.65;
	else if (n>400 && n <=600)
		bill = 230 + n * 0.65;
	else if (n>600)
		bill = 360 + n;
	else
		printf("\n\t Error: Invalid number of units");
}
else
{
	printf("\n\t Error: Invalid User Type");
}

if (bill>0)
{
	printf("\n*************************************************");
	printf("\n Meter Number = %d" ,mno);
	printf("\n Bill Amount for (%d) units is (%.5f) \n",n,bill);
	printf("\n*************************************************");
}

getch();
}
