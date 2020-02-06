/*Sunil(Nalanda,Bihar) & CO.....C++
/*wap SUM 2 digit using self header file in c [self3.c]*/
#include<stdio.h>
#include<sum.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("\n a & b");
scanf("%d%d",&a,&b);
c=sum(a,b);
printf("\n sum=%d",c);
getch();


}