#include<process.h>
#include<stdio.h>
#include<conio.h>
void main()
{
int n,i=1, fact=1,square,root;
clrscr();
while(1)
{
printf("\n\t\t****programm to arithmetic operation****\n");
printf("\tmenu\n");
printf("\t1-fact\n");
printf("\t2-square\n");
printf("\t3-root\n");
printf("\t4-exit\n");
printf("\n enter your choice :");
scanf("%d",&n);
switch(n)
{
case 1:
printf("\n enter the no:");
scanf("%d",&n);
for(i=1;i<=n;i++)
fact=fact*i;
printf("\n\tfactorial=%d\n",fact);
break;
case 2:
printf("\n enter the no:");
scanf("%d",&n);
square=n*n;
printf("\n\tsquare=%d\n",square);
break;
case 3:
printf("\n enter the no:");
scanf("%d",&n);
for(i=1;i<=n/2;i++)
if(n/i==i)
printf("\n\troot=%d\n",i);
break;
case 4:
exit(0);
default:
printf("\t\n sorry wrong choice");
}
}
}