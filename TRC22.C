#include<stdio.h>
#include<conio.h>
void main()
{
long int n,i=1,fact=1;
clrscr();
printf("\t\t\tprint the factorial");
printf("\n\nenter the number:");
scanf("%ld",&n);
while(i<=n)
{
fact=fact*i;
i++;
}
printf("\n%ld",fact);
getch();
}