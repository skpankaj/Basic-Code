#include<process.h>
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,n;
clrscr();
while(1)
{
printf("\n\t\tprint the arithmetic operation\n");
printf("\t menu\n");
printf("\t 1-add\n");
printf("\t 2-sub\n");
printf("\t 3-mul\n");
printf("\t 4-div\n");
printf("\t 5-exit\n");
printf(" please enter your choice:");
scanf("%d",&n);
switch(n)
{
case 1:
printf("enter first integer:");
scanf("%d",&a);
printf("enter second integer:");
scanf("%d",&b);
c=a+b;
printf("\t sum=%d\n",c);
break;
case 2:
printf("enter first integer:");
scanf("%d",&a);
printf("enter second integer:");
scanf("%d",&b);
if(a>b)
c=a-b;
else
c=b-a;
printf("sub=%d\n",c);
break;
case 3:
printf("enter first integer:");
scanf("%d",&a);
printf("enter second integer:");
scanf("%d",&b);
c=a*b;
printf("\t mult=%d\n",c);
break;
case 4:
printf("enter first integer:");
scanf("%d",&a);
printf("enter second integer:");
scanf("%d",&b);
c=a/b;
printf("\t div=%d\n",c);
break;
case 5:
exit(0);
default:
printf(" wrong choice");
}
}
}