#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
clrscr();
printf("\t\t\t***print the tree 3***\n");
for(i=1;i<=5;i++)
{
	for(j=4;j>=i;j--)
	{
	printf(" ");
	}
	for(k=1;k<=i;k++)
	{
	printf("*");
	}
	printf("\n");
}
printf("\n\n\t\t\t thanks you for using this programme");
getch();
}









