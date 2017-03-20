/*Write a program to display C Program files in current directory. 
  The user should select one of the files. 
  Convert the file contents in Capital and Display the same on the screen.
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fptr;
	char file[15],ch;
	clrscr();
	
	system("dir /w *.c");
	printf("\nEnter a file name: ");
	scanf("%s",file);
	fptr=fopen(file,"r");
	if(fptr==NULL)
    {
	   printf("\nThe file cannot be accessed");
	   exit(1);
    }
	clrscr();
	
	printf("THE CONTENTS OF THE FILE %s IN UPPER CASE ARE :\n",file);
	while((ch=fgetc(fptr))!=EOF)
	{
		printf("%c",toupper(ch));
	}
	getch();

}