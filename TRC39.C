/*Fibonacci using not return(tr39.c)*/
#include<stdio.h>
#include<conio.h>
void main()
{
void fibo(int,int,int);
int term,ft,st;
clrscr();
ft=1;
st=1;
printf("enter the term");
scanf("%d",&term);
term=term-2;
fibo(ft,st,term);
}
void fibo(int a,int b,int c)
{
int i;
for(i=1;i<=c;i++)
{
c=a+b;
printf("%d\t",c);
a=b;
b=c;
}
getch();
}