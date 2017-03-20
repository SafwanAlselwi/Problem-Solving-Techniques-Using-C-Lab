//Write a program to display the attributes of a file using dos interrupt
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
	union REGS in,out;
	char file[' '];
	int mask,j;
	clrscr();
	system("dir /w *.c");     // viewing files horisantally.
	puts("\nEnter the file name to display its arrtibutes\n");
	gets(file);
	in.x.dx=(int)&file;
	in.h.ah=0x43; // 0x34 is to Get and Set File attributes
	in.h.al=0;   //al=0; get attributes, al=1; set attributes
	intdos(&in,&out);
	if(out.x.cflag!=0)
		puts("\nFile not found");
	else
	{
		printf("\nFile attributes of %s are \n",file);
		if(out.h.cl==0)
			puts("\n normal file");
		else
		{
			mask=1;
			for(j=1;j<=6;j++)
			{
				switch(out.h.cl&mask)
				{
					case 1:	puts("\n[*]read only");		break;
					case 2:	puts("\n[*]hidden");		break;
					case 4:	puts("\n[*]system");		break;
					case 8:	puts("\n[*]volume label");	break;
					case 16:  puts("\n[*]sub directory");	break;
					case 32:  puts("\n[*]archieve");		break;
				}
				mask=mask*2;
			}
		}
	}
	getch();
}