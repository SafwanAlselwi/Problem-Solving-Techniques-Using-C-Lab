// Write a Program to Change the Mouse Cursor

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<process.h>

union REGS i,o; //Two Addressing Registers of type union REGS declared in dos.h
struct SREGS s;
int cursor[50]=
	{0xaaaa,0xbbbb,0xdddd,0xbbbb,
	 0xaaaa,0xffff,0xdddd,0xbbbb,
	 0xaaaa,0xffff,0xdddd,0xbbbb,
	 0xaaaa,0xffff,0xdddd,0xbbbb,
	 0xaaaa,0xffff,0xdddd,0xbbbb,
	 0xaaaa,0xffff,0xdddd,0xbbbb,
	 0xaaaa,0xffff,0xdddd,0xbbbb,
	 0xaaaa,0xffff,0xdddd,0xbbbb,
	 0xaaaa,0xffff,0xdddd,0xbbbb,
	 0xaaaa,0xffff,0xdddd,0xbbbb
	};
int initmouse();
void cur_shape(int *);
void showpointer();

void main()
{
  int gm; //Graphic Mode
  int gd; //Graphic Driver
  gd = DETECT; //DETECT is a macro defined in 'graphics.h'. It requests initgraph() to automatically determine which graphics driver to load in order to switch to the highest resolution graphics mode
  initgraph(&gd,&gm,"C:\\tc"); //switching the mode from text to graphics,it has three args, 1.Graphics Driver 2.Graphics Mode 3.The path to the driver file

  if( initmouse() == 0 ){
	printf("\nMouse supporting files are not available");
	exit(1);
  }

  cur_shape(cursor);
  showpointer();
  getch();
}

int initmouse()
{
   i.x.ax = 0;        //Initialize AX by setting its value to 0
   int86(0X33,&i,&o); //int86() used to Invoke interrupts, it takes three arguments 1. PORT No '0X33' for mouse interrupt 2.Input Address Register 3.Output Address Register
   return ( o.x.ax ); //Return the Mouse Status AX=0 support isn't available, AX=FFFFh Support is available
}
void showpointer()
{
   i.x.ax= 1;        //when AX is 1, it Means show Mouse Pointer
   int86(0X33,&i,&o);
}
void cur_shape(int *shape)
{
   i.x.ax=9; //Set Graphics cursor Block upon entry
   i.x.bx=0; //Cursor Hot Spot (Horizontal)
   i.x.cx=0; //Cursor Hot Spot (Vertical)
   i.x.dx=(unsigned) shape; //DX: Pointer to screen and cursor masks
   segread(&s);
   s.es = s.ds;
   int86(0x33,&i,&o);
}