/*Write a C program to check the correctness of the date and compare two dates*/
#include <stdio.h>
#include <conio.h>

int flag;
int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};

void checkDate(int d,int m,int y)
{
	if(y % 400 == 0 || (y % 100 != 0 && y % 4 == 0))
		month[1]=29;
	if (m>0 && m<13)
	{
		if(d>=1 && d <= month[m-1] )
			flag=1;
	}

   if (flag==1)
	 printf("It is a legitimate date!\n");
   else
	 printf("It's not a legitimate date!\n");
}
void compare(int d1,int m1,int y1,int d2,int m2,int y2)
{
	int ref,dd1,dd2,i;

    ref = y1;
    if(y2<y1)
    ref = y2;
    dd1=0;
	dd2=0;
    dd1=dater(m1);
    for(i=ref;i<y1;i++)
    {
	   if(y1 % 400 == 0 || (y1 % 100 != 0 && y1 % 4 == 0))
			dd1+=1;
    }

    dd1=dd1+d1+(y1-ref)*365;

    dd2=dater(m2);
    for(i=ref;i<y2;i++)
    {
	   if(y2 % 400 == 0 || (y2 % 100 != 0 && y2 % 4 == 0))
	   dd2+=1;
    }
    dd2=dd2+d2+((y2-ref)*365);
    printf("\n\n Difference between the two dates is %d days",abs(dd2-dd1));
}

int dater(int x)
{
    int y=0;
    switch(x)
    {
	   case 1: y=0; break;
	   case 2: y=31; break;
	   case 3: y=59; break;
	   case 4: y=90; break;
	   case 5: y=120;break;
	   case 6: y=151; break;
	   case 7: y=181; break;
	   case 8: y=212; break;
	   case 9: y=243; break;
	   case 10:y=273; break;
	   case 11:y=304; break;
	   case 12:y=334; break;
	   default: printf("Invalid Input\n\n\n\n");
    }
    return(y);
}
void main()
{
 int d1,m1,y1,d2,m2,y2;
 int c=0;
 char ch;
 clrscr();
 read:
 do{    clrscr();
	flag = 0;
	printf("\nchoose your choice !\n");
	printf("1.check the correct date\n");
	printf("2.compare two dates\n");
	printf("3.Exit\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			printf("Enter the date dd mm yyyy\n");
			scanf("%d %d %d",&d1,&m1,&y1);
			checkDate(d1,m1,y1);
			getch();
			break;
		case 2:
			printf("Enter first date dd mm yyyy\n");
			scanf("%d%d%d",&d1,&m1,&y1);
			printf("Enter second date dd mm yyyy\n");
			scanf("%d%d%d",&d2,&m2,&y2);
			compare(d1,m1,y1,d2,m2,y2);
			getch();
			break;
		case 3: printf(" \n Are You sure ?(Y / N)");
			scanf("%s",&ch);
			if(ch=='y' || ch=='Y')
			exit(0);
			else
			goto read;
		default: printf("\n Wrong Choice \n\t Try Again!");
			 getch();
			 break;
	}
}while(c!=3);
}