/* Write a menu driven C Program to find the factorial number (a) without function (b) using non-recursive function (c) using recursive function*/
#include <stdio.h>
#include <conio.h>

void Nfact(int n)
{
	int i,fact=1;

	for(i=1;i<=n;i++)
		fact=fact*i;

	printf("\nUsing Non Recursive Function");
	printf("\nFactorial of %d is %d\n",n,fact);
}
int Rfact(int n)
{
	if(n==1)
		return 1;
	else
		return (n*Rfact(n-1));
}
void main()
{
	int n,opt,i,f=1;
	clrscr();

	do
	{
		printf("\nEnter the number :");
		scanf("%d",&n);

		printf("\nplease select ur option\n");
		printf("1.Without fuction\n");
		printf("2.Non Recursive Function\n");
		printf("3.Recursive Function\n");
		printf("0.Exit\n");
		scanf("%d",&opt);

		switch(opt)
		{
		case 1:
				for(i=1;i<=n;i++)
					f=f*i;

				printf("\nWithout Function");
				printf("\nFactorial of %d is %d",n,f);
				break;
		case 2:
				Nfact(n);
				break;
		case 3:
				printf("\nUsing Recursive Function");
				printf("\nFactorial of %d is %d",n,Rfact(n));
				break;
		default:
				break;
		}
	}while(opt!=0);
}