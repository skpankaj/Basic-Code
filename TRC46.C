//factorial of number with return type(TR46.C)
#include<stdio.h>
#include<conio.h>
void main()
{
int fact(int *);
int num, result;
clrscr();
printf("enter the no:");
scanf("%d",&num);
result=fact(&num);
printf("%d",result);
getch();
}
int fact(int *n)
{
int i,f=1;
for(i=1;i<=*n;i++)
{
f=f*i;
}
return(f);
}
