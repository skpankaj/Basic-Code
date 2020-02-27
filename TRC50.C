#include<stdio.h>
#include<conio.h>
void main()
{
int a[10];
int i,temp;
for(i=0;i<10;i++)
{
printf("enter the element");
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
temp=a[i];
a[i]=a[9-i];
a[9-i]=temp;
}
for(i=0;i<10;i++)
{
printf("%d",&a[i]);
}
getch();
}