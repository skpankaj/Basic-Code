#include<stdio.h>
#include<conio.h>
void main()
{
int n=0,i=1;
clrscr();
printf("\t\t***progrom to get square root***");
printf("\n\n enter the no:");
scanf("%d",&n);
for(i=1;i<=n/2;i++)
{
n=i*i;
}
printf("\n\nroot=%d",i);
printf("\n\n\t\tthank you for using this programm");
getch();
}