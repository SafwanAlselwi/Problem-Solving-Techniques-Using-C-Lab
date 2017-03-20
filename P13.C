/*
Write a C program to add and multiply two matrices
*/
#include<stdio.h>
#include<conio.h>

int a[10][10],b[10][10],c[10][10];
int row,col,i,j,k;

void sum();
void multi();
void read(int x[10][10]);
void display(int x[10][10]);

void main()
{
	clrscr();
	printf("\nEnter Row Value: ");
	scanf("%d",&row);
	printf("\nEnter Column value: ");
	scanf("%d",&col);

	printf("\nEnter the Values of Materx A:\n");
	read(a);

	printf("\nEnter the Values of Materx B:\n");
	read(b);

	printf("\nMatrix A is:");
	display(a);
	printf("\nMatrix B is:");
	display(b);

	printf("\nThe sum of the two Matrices is:");
	sum();
	display(c);


	if(col!=row)
		printf("\nMultiplication is not possible");
	else
	{
		printf("\nMultiplication of the two Matrices is:");
		multi();
		display(c);
	}
getch();
}

void read(int x[10][10])
{
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
		{
			printf("[%d][%d]=",i,j);
			scanf("%d",&x[i][j]);
		}
}

void display(int x[10][10])
{
	printf("\n");

	for(i=0;i<row;i++){
	 for(j=0;j<col;j++)
		 printf("  %d  ",x[i][j]);
	printf("\n");
	}
}

void sum()
{
    for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			c[i][j]=a[i][j]+b[i][j];
}

void multi()
{
	for(i=0;i<row;i++)
	  for(j=0;j<col;j++)
	  {
		c[i][j]=0;
		for(k=0; k<row; k++)
			c[i][j]+=a[i][k]*b[k][j];
	  }
}