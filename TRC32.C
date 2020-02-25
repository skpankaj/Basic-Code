#include<stdio.h>
#include<conio.h>
void main()
{
long int n,dig,sum=0;
clrscr();
printf("\t\t\tprint the sum of individual\n\n");
printf("\n enter the no you want:");
scanf("%ld",&n);
while(n>0)
{
dig=n%10;
sum=sum+dig;
n=n/10;
}
printf("\n\tsum=%ld",sum);
getch();
}