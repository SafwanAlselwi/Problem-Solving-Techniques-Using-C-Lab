/*Create user defined data type equivalent to int.
  Declare three variables of its type.
  Perform arithmetic operations using these variables.
*/
#include <stdio.h>
#include <string.h>
void main()
{
  // define a data type called number which is equivalent to int
  typedef int number;

  number n1,n2,n3,add,sub,mul,div;
  add=sub=mul=div=0;

  clrscr();

  printf("Enter the three numbers\n");
  scanf("%d%d%d",&n1,&n2,&n3);

  add=n1+n2+n3;
  sub=n1-n2-n3;
  mul=n1*n2*n3;
  if(n2!=0 && n3!=0)
    div=n1/n2/n3;
  else
    printf("\nDivision is not possible");

  printf("Addition of three numbers is %d\n",add);
  printf("Subtraction of three numbers is %d\n",sub);
  printf("Multiplication of three numbers is %d\n",mul);
  printf("Division of three numbers is %d\n",div);

  getch();
}