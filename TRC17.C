#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
clrscr();
printf("\t\t***program to print tree 2***\n");
for(i=1;i<=5;i++)
{
for(j=5;j>=i;j--)
	{
	printf("*");
	}
printf("\n");
}
printf("\n\n****thank you for using this programme***");
getch();
}