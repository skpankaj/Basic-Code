#include<stdio.h>
#include<conio.h>
void main()
{
int i,da,hra,basic,salary;
clrscr();
printf("\t\t***program to print salary***");
for(i=0;i<=5;i++)
{
printf("\n\n enter da:");
scanf("%d",&da);
printf("\n\n enter basic:");
scanf("%d",&basic);
printf("\n\n enter hra:");
scanf("%d",&hra);
salary=hra+da+basic;
printf("\n\n\t\tyour net salary=%d",salary);
}
printf("\n\n\t\t thank you for using this programme");
getch();
}