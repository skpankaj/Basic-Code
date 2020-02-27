#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3];
int b[3][3];
int i,j;
clrscr();
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("enter the element:");
scanf("\n%d",&a[i][j]);
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
b[i][j]=a[2-i][2-j];
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d",b[i][j]);
}
}
getch();
}