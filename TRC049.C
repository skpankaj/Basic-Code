#include<stdio.h>
#include<conio.h>
void main()
{
int a[10];
int i,sum=0;
clrscr();
for(i=0;i<10;i++)
{
printf("enter the element:");
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("sum=%d",sum);
getch();
}