#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,i;
clrscr();
printf("\n\n\t\t***check the no prime or not***");
printf("\n\nenter the no.");
scanf("%d",&n);
for(i=2;i<=n;i++)
{
if(n%i==0)
break;
}
if(n==i)
{
printf("\n\n prime");
}
else
{
printf("\n\n not prime");
}
printf("\n\n\t\tthank you for using this programme");
getch();
}