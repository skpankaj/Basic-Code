#include<stdio.h>
#include<conio.h>
void main()
{
int year;
clrscr();
printf("\t\t**check the year leap or not**");
printf("\n\n enter the year you want to check :");
scanf("%d",&year);
if((year%400==0)&&(year%100==0)||(year%100!=0)&&(year%4==0))
{
printf("\n\ngiven year is leap year");
}
else
{
printf("\n\ngiven number is not aleap year");
}
printf("\n\n\t\t*** thak you for using this programme");
getch();
}