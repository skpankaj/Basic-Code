#include<stdio.h>
#include<conio.h>
void main()
{
int age;
char sex;
clrscr();
printf("\t\t***check the person Qualified for Insurance***");
printf("\n\n Enter the Age:");
scanf("%d",&age);
fflush(stdin);
printf("\n\n enter the sex (m/f)?");
scanf("%c",&sex);

if((sex=='m')&&(age>=30)||(sex=='f'))
{
printf("\n\n   Qualified for Insurance");
}
else
{
printf("\n\n   not insured");
}
printf("\n\n\t\***Thanks for using this Programme*** ") ;
getch();
}
