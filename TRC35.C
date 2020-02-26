#include<stdio.h>
#include<stdio.h>
void main()
{
long int n,rev=0,dig;
clrscr();
printf("\t\tprogramme to print reverse");
printf("\n enter the no:");
scanf(" %ld",&n);
while(n>0)
{
dig=n%10;
rev=rev*10+dig;
n=n/10;
}
printf("rev=%ld",rev);
getch();
}
