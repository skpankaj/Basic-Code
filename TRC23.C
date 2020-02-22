#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k=0,sum=0;
clrscr();
for(i=1;i<=10;i++)
{
k=k+1;
sum=sum+(i*i)/k;
}
printf("%d",sum);
getch();
}









