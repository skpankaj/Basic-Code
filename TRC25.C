#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,sum;
clrscr();
printf("\n\n\t\t***print sum from tab 1 to 5****\n");
for(i=1;i<=5;i++)
{            sum=0;
	for(j=1;j<=10;j++)
	{
	sum=sum+i*j;
	}
printf("%d\t",sum);
printf("\n");
}
printf("\n\n\t\tthank you for using this programme");
getch();
}