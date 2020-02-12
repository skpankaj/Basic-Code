#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,b=1;
clrscr();
printf("\t\t***print the foactorial***");
printf("\n\nenter the number:");
scanf("%d",&n);
for(i=1;i<=n;i=i+1)
{
  b=b*i;
}
printf("\n\nfactorial=%d",b);
printf("\n\n\t\t***thanks you for using this programme***");
getch();
}