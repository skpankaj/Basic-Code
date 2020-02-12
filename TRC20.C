#include<stdio.h>
#include<conio.h>
void main()
{
int fact,square,i,j,sum=0;
clrscr();
printf("\n\n\t\t the programme series \n");
for(i=1;i<=10;i++)
{          fact=1;
	for(j=1;j<=i;j++)
	{
	fact=fact*j;
	sum=sum+(i*i)/fact;
	}
}
printf("%d",sum);
printf("\n\n\t\t thank you for using this programme");
getch();
}