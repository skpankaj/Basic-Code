#include<stdio.h>
#include<conio.h>
void main()
{
int a[10];
int i;
clrscr();
for(i=0;i<10;i++)
{
printf("enter the element:");
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
printf("%d\t",a[i]);
}
getch();
}