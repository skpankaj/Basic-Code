/*sum of Fibonacci series without return:(tr40.c)*/
#include<stdio.h>
#include<conio.h>
void main()
{
void fibo(int,int,int);
int term ,ft,st;
ft=1;
st=1;
printf("enter the term:");
scanf("%d",&term);
fibo(ft,st,term);
}
void fibo(int x,int y,int z)
{
int i,sum,net=0;
for(i=1;i<=z;i++)
{
sum=x+y;
x=y;
y=sum;
net=net+sum;
}
printf("%d",net);
}










