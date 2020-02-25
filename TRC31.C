#include<stdio.h>
#include<conio.h>
void main()
{
long int n,sum=0,dig,x;
clrscr();
printf("\t\t\t armstrong number ");
printf("\n enter the no:");
scanf("%ld",&n);
x=n;
while(n>0)
{
dig=n%10;
sum=dig*dig*dig+sum;
n=n/10;
}
if(x==sum)
{
printf(" \n\t\t given no is armstrong");
}
else
{
printf("\n\t\t sorry not arm strong number:");
}
getch();
}

