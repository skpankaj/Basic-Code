#include<stdio.h>
#include<conio.h>
void main()
{
int n,b;
clrscr();
printf("\t\t***check the no even or odd***");
printf("\n\nenter the koi number:");
scanf("%d",&n);
b=n%2;
if(b==0)
{
printf("\n\n number is even");
}
else
{
printf("\n\nnumber is odd");
}
printf("\n\n\t\tthank you for using this programme");
getch();
}