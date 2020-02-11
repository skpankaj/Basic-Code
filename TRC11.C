#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,i;
printf(" \t\t*** program to repeated sum***");
for(i=0;i<=10;i++)
{
printf("\n\nenter first integer");
scanf("%d",&a);
printf("\n\nenter second integer");
scanf("%d",&b);
c=a+b;
printf("\n\nsum=%d",c);
}
printf("\n\n\t\tthank you for using this programme");
getch();
}