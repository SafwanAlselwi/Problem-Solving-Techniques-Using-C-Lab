// Write a program to accept a text upto 50 words
//and perform the following actions
//1- count total vowels, constant, spaces and words with spaces.
//2- program should erase more than one space between two successive words.

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i=0, v=0, c=0, s=0, sen=0, w=1;
char ch,st[200];
clrscr();
fflush(stdin);

printf("\nEnter string\n");
while((ch=getchar())!='\n')
{
	st[i]=ch;
	if(st[i-1]==' ' && st[i]==' ')
	{
		st[i-1]=st[i];
		i--;
	}
	else
	{
		if(st[i]==' ')
			w++;
	}
	i++;
}//end while

st[i]='\0';
printf("\nString with one space between to succesive words is\n");
printf("%s",st);

for(i=0;i<strlen(st);i++)
{
	switch (st[i])
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
				 v++; break;
		case ' ':
				 s++; break;
		case '.':
				 sen++; break;
		default:
				 c++; break;
	}
}

printf("\n Total: %d", strlen(st));
printf("\n Total Number of vowels    = %d", v);
printf("\n Total Number of Constants = %d", c);
printf("\n Total Number of spaces    = %d", s);
printf("\n Total Number of words     = %d", w);
printf("\n Total Number of sentenses = %d", sen);

getch();
}