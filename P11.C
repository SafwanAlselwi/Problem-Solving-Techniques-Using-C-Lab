/*  Write a menu driven C program to calculate sin, cos, exponential series without using standard library functions.
    Sine series        : sin(X) = X - (X^3)/3! + (X^5)/5! - (X^7)/7! +.....
    Cosine Series      : cos(X) = 1 - (X^2)/2! + (X^4)/4! - (X^6)/6! +.....
    Exponential Series : e^X    = 1 + (X^1)/1! + (X^2)/2! + (X^3)/3! +.....
*/
#include<stdio.h>
#include<conio.h>
#define PI 3.14159

int lim;      //The number of terms (accuracy)
float ang;    //The Angle in degree
float rad;    //The Angle in radian
float t;      //The Equation Variable (previous term)
float sum;    //Final Result of series
int ch;       //Menu choice
int i;        //Loop counter

void read();
void main()
{
do
{
    //clrscr();
	printf("\n1. Sin Series");
	printf("\n2. Cos Series");
	printf("\n3. Exponential Series");
	printf("\n4. EXIT");
    printf("\nEnter your choice:  ");
	scanf("%d",&ch);

	switch(ch)
	{
	case 1:
	    read();
		t=rad;
		sum=rad;
		for(i=2;i<=2*lim;i+=2)
		{
		   t = t*(-1)*rad*rad / (i*(i+1));
		   sum+=t;
		}
		printf("\nSIN(%f) = %f \n",ang,sum);
		break;
	case 2:
	    read();
		t=1;
		sum=1;
		for(i=1;i<=2*lim;i+=2)
		{
		   t = t*(-1)*rad*rad / (i*(i+1));
		   sum+=t;
		}
		printf("\nCOS(%f) = %f \n",ang,sum);
		break;
	case 3:
	    read();
		t=1;
		sum=1;
		for(i=1;i<=lim;i++)
		{
		  t = (t*ang)/i;
		  sum+=t;
		}
		printf("\n e^%f = %f \n",ang,sum);
		break;
    case 4:
            exit(0);
			break;
    default:
			printf("\n WRONG CHOICE, Try again");
	}
}while(ch!=4);
}
void read(){
    printf("\n\nEnter the number of terms:  ");
	scanf("%d",&lim);
	printf("\nEnter the Angle in Degree:  ");
	scanf("%f",&ang);
	rad=(ang*PI)/180; //Converting the angle in degree to radian
}