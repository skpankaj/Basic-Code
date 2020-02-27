#include<stdio.h>
#include<conio.h>
void main()
{
int a[10];
int i,odd=0,even=0;
clrscr();
for(i=0;i<10;i++)
{
printf("enter the element:-");
scanf("%d",a[i]);
}
for(i=0;i<10;i++)
{
if(a[i]/2%2==0)
even=even+1;
else
odd=odd+1;
}
printf("odd=%d",odd);
printf("even=%d",even);
getch();
}









