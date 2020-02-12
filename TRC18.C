#include<stdio.h>
#include<conio.h>
void main()
{
long int n,i,fact;
clrscr();
printf("\t\t\tprogramme to print fact 1 to10\n");
for(n=1;n<=10;n++)
{           fact=1;
	for(i=1;i<=n;i++)
	{
	fact=fact*i;
	printf("%ld\t",fact);
	}
printf("\n");
}
printf("\t\t\tthank uou for using this programme");
getch();
}