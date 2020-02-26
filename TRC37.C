#include<stdio.h>
#include<conio.h>
void main()
{
int fact(int);
int f,n;
printf("enter a number");
scanf("%d",&n);
f=fact(n);
printf("%d",f);
}
int fact(int x)
{
int i,y=1;
for(i=1;i<=x;i++)
{
y=y*i;
}
return(y);
}









