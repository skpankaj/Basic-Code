#include<stdio.h>
#include<conio.h>
void main()
{
void fact(int);
int n;
clrscr();
printf("enter the number");
scanf("%d",&n);
fact(n);
}
void fact(int x)
{
int i,y=1;
for(i=1;i<=x;i++)
{
y=y*i;
}
printf("%d",y);
getch();
}