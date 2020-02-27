#include<stdio.h>
#include<conio.h>
void main()
{
void swap(int *,int *);
int a,b;
clrscr();
printf("enter two integer:");
scanf("%d%d",&a,&b);
swap(&a,&b);
printf("\n%d\n%d",a,b);
getch();
}
void swap(int *p,int *q)
{
int temp;
temp=*p;
*p=*q;
*q=temp;
}









