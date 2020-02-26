#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,result;
clrscr();
printf("enter two integer");
scanf("%d%d",&a,&b);
result=add(a,b);
printf("%d",result);
}
int add(int x,int y)
{
int z;
z=x+y;
return(z);
}