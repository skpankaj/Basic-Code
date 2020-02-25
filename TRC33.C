#include<stdio.h>
#include<conio.h>
void main()
{
long int n=1,i,fact;
clrscr();
printf("\t\t\tfactorial from i to 10\n");
while(n<=10)
{      fact=1;i=1;
  while(i<=n)
  {
  fact=fact*i;
  i++;
  }
  printf("%ld\n",fact);
  n++;
}
printf("\n\n\t\tthank you for using this programme");
getch();
}