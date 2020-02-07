#include<stdio.h>
#include<conio.h>
void main()
{
int age;
char sex;
clrscr();
printf("\t\t***check the person qualified for insurance***");
printf("\n\n enter the age:");
scanf("%d",&age);
fflush(stdin);
printf("\n\n enter the sex (m/f)?");
scanf("%c",&sex);

if((sex=='m')&&(age>=30)||(sex=='f'))
{
printf("\n\n   qualified for insurance");
}
else
{
printf("\n\n   not insured");
}
printf("\n\n\t\***thanks for using this programme*** ") ;
getch();
}