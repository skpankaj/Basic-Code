#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
clrscr();
printf("\t\t\t***print the tree4***\n");
for(i=1;i<=5;i++)
{
	for(j=1;j<=i;j++)
	{
	printf(" ");
	}
	for(k=5;k>=i;k--)
	{
	printf("*");
	}
printf("\n");
}
printf("\n\n\t\t****thank you for using this programme***");
getch();
}