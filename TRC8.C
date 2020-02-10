#include<stdio.h>
#include<conio.h>
void main()
{
int b,p,s=1,i;
clrscr();
printf("\t\t***Base Power Programm***");
printf("\n\nenter the base:");
scanf("%d",&b);
printf("\n\nenter the power:");
scanf("%d",&p);
for(i=1;i<=p;i++)
{
s=s*b;
}
printf("\n\n\tresult=%d",s);
printf("\n\n\t\tthank you for using this programme");
getch();
}
