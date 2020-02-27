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
scanf("%d",&a[i][j]);
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
b[i][j]=a[j][i];
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("\n%d",b[i][j]);
}
}
}