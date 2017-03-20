/* Write a C program to display list of C program files and directories*/
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<process.h>
void main()
{
clrscr();
printf("<<\t\t Displaying files Horisantally \t\t>> \n");
printf(" << press Enter to view C programs files>>\n\n");
getch();
system("dir /w *.c");     // viewing files horisantally.
//system("dir /p *.c "); // viewing files page by page.
getch();
clrscr();

// Viweing Directories
printf("<< press enter to view the Directories >>\n\n");
getch();
system("dir /ad"); // viewing Directories.
getch();
}