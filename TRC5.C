#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
clrscr();
printf("\t\t***Find the Largest Number***" );
printf("\n\n Enter first Number:");
scanf("%d",&a);
printf("\n\n enter the second number:");
scanf("%d",&b);
printf("\n\n enter the third number:");
scanf("%d",&c);
printf("\n\n enter the fourth number:");
scanf("%d",&d);
if((a>b)&& (a>c)&&(a>d))
printf("\n\n\t\ta is greatest");
if((b>a)&&(b>c)&&(b>d))
printf("\n\n\t\tb is greatest");
if((d>a)&&(d>b)&&(d>c))
printf("\n\n\t\td is greatest");
else
{
printf("\n\n\t\tc is greatest:");
}
printf("\n\n Thank you for using this Programm");
getch();
}
