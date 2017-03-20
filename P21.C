//Write a program to interchange the contents of two files.
#include<conio.h>
#include<stdio.h>

void main(){

 FILE *fp1; // Pointer to first file
 FILE *fp2; // Pointer to second file
 FILE *fp3; // pointer fo temp file
 char ch = ' ';

 clrscr();
 //1. Copy the contents of 1st file to temp file
 fp1 = fopen("f1.txt","r");
 fp3 = fopen("f3.txt","w");
 while((ch = getc(fp1)) != EOF){
	putc(ch,fp3);
 }
 fclose(fp1);
 fclose(fp3);

 //2. Copy the contents of 2nd file to 1st file
 fp2 = fopen("f2.txt","r");
 fp1 = fopen("f1.txt","w");
 while((ch = getc(fp2)) != EOF){
	putc(ch,fp1);
 }
 fclose(fp1);
 fclose(fp2);

 //3. Copy the contents of temp file to 2nd file
 fp3 = fopen("f3.txt","r");
 fp2 = fopen("f2.txt","w");
 while((ch = getc(fp3)) != EOF){
	putc(ch,fp2);
 }
 fclose(fp2);
 fclose(fp3);

 printf("\nInterchange Done");

getch();
}