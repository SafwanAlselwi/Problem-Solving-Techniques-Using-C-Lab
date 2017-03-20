/*
Write a C program to to accept array of elements in unsorted order,
sort the array and search an element using binary search
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a[10];
int found =0,len,i,j,temp;
int l,m,h,key;
clrscr();

printf("\nEnter the LENGTH of the array: ");
scanf("%d",&len);

printf("\nEnter the Array's Elements one by one:\n" );
for(i=0; i<len ; i++)
	scanf("%d",&a[i]);

//Sorting the array
for(i=0 ; i<len-1 ; i++){
	for(j=0 ;j<len-i-1 ; j++){
	  if(a[j] > a[j+1])
	  {
		 temp = a[j];
		 a[j] = a[j+1];
		 a[j+1] = temp;
	  }
	}
}
printf("\nSorted Array is:\n");
for(i=0 ; i<len ;i++)
	printf("%d\t",a[i]);

printf("\nEnter an Element to Search for:\t");
scanf("%d",&key);

l=0;
h=len-1;
while(l<=h && !found){
	m=(l+h)/2;

	if(key==a[m])
		found =1;

	if(key>a[m])
		l=m+1;
	else
		h=m-1;
}

if (found)
	printf("\nNumber IS found");
else
	printf("\nNumber NOT found");

getch();
}