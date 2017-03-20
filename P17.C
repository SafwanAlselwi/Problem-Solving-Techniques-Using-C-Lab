//Write a program to delete a file using DOS interrupt
#include <stdio.h>
#include <conio.h>
#include <dos.h>

void main( )
{
	char file[' '];
	union REGS in,out; //Two Addressing Registers of type union REGS declared in dos.h
	clrscr( );

	system("dir /w *.C");
	printf(" Enter the File Path and Name to delete = ");
	gets(file);

	in.h.ah=0x41;
	in.x.dx=FP_OFF(file);

	int86(0x21,&in,&out);//int86() used to Invoke interrupts, it takes three arguments 1. PORT No '0X21' 2.Input Address Register 3.Output Address Register
	
	if(out.x.cflag)
	   printf("\n Error : Unable to delete the file.");
	else
	   printf("\n The File is deleted sucessfully.");

	getch( );
}