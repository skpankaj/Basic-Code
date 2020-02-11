#include<stdio.h>
#include<conio.h>
void main()
{
int cp,sp,loss,profit;
clrscr();
printf("\t\t***program to print loss or profit***");
printf("\n\nenter the selling price:");
scanf("%d",&sp);
printf("\n\nenter the cost price:");
scanf("%d",&cp);
if(sp>cp)
{
profit=sp-cp;
printf("\n\nprofit=%d rs.",profit);
}
else
{
loss=cp-sp;
printf("\n\nloss=%d rs.",loss);
}
printf("\n\t\t\tthank you for using this programme:");
getch();
}