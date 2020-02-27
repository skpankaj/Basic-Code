/* increment two value without return type:(tr45.c)*/
#include<stdio.h>
#include<conio.h>
void main()
{
void increment(int*,int*);
int a,b;
printf("enter two number:");
scanf("%d%d",&a,&b);
increment(&a,&b);
printf("\n%d\n%d",a,b);
getch();
}
void increment(int *p,int *q)
{
*p=*p+1;
*q=*q+1;
}