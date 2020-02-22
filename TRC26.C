
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,l,m;
clrscr();
printf("\t\t****programme to print tree5***\n");
for(i=1;i<=5;i++)
{
	for(j=1;j<=i;j++)
	{
	printf("*");
	}
	for (k=4;k>=i;k--)
	{
	printf(" ");
	}
	for(l=4;l>=i;l--)
	{
	printf(" ");
	}
	for(m=1;m<=i;m++)
	{
	printf("*");
	}
printf("\n");
}
printf("\n\n\t\tthanks you for using this programme");
getch();
}