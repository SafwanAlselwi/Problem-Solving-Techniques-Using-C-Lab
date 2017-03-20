/*write c program to enter names of cities and display all the entered names alphabetically.*/
#include <stdio.h>
#include <string.h>
#include <conio.h>
void main()
{
	char city[20][15], temp[20];
	int i,j,n;
	clrscr();

	printf("Enter the number of cities \n");
	scanf("%d",&n);

	printf("Enter the Cities (dont use space for white space, use _ )\n");
	for(i=0;i<n;i++)
		scanf("%s",city[i]);

	printf("\nEntered cities are \n");
	for(i=0;i<n;i++)
		printf("%s\n",city[i]);

	for(i=0;i<n-1;i++)
		for(j=0;j<n-i-1;j++)
		{
			if(strcmp(city[j],city[j+1])>0)
			{
				strcpy(temp,city[j]);
				strcpy(city[j],city[j+1]);
				strcpy(city[j+1],temp);
			}
		}
	printf("\nsorted city are \n");
	for(i=0;i<n;i++)
		printf("%s\n",city[i]);
	getch();
}