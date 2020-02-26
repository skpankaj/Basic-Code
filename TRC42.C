#include<stdio.h>
#include<conio.h>
void main()
{
int sqrt(int);
int n,result;
clrscr();
printf("enter the integer ");
scanf("%d",&n);
result=sqrt(n);
printf("%d",result);
}
int sqrt(int x)
{
int i;
for(i=1;i<=x;i++)
{
if (x/i==i)
return(i);
}
return(i);
}