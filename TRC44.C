#include<stdio.h>
#include<conio.h>
void main()
{
void add(int,int);
int a,b;
clrscr();
printf("enter two number:");
scanf("%d%d",&a,&b);
add(a,b);
}
void add(int x,int y)
{
int z;
z=x+y;
printf("%d",z);
getch();
}
