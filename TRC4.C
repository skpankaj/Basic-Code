#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
clrscr();
printf("\t\t***choose the largest number***");
printf("\n\n enter first integer:");
scanf("%d",&a);
printf("\n\n enter second integer:");
scanf("%d",&b);
printf("\n\n enter third integer:");
scanf("%d",&c);
printf("\n\n enter fourth integer:");
scanf("%d",&d);
if(a>b)
{
  if(a>c)
     {
	if(a>d)
	printf("\n\n\t\t a is greatest");
	else
	printf("\n\n\t\t d is greatest");
     }
  else
     {
	if(c>d)
	printf("\n\n\t\t c is greatest");
	else
	printf("\n\n\t\t d is greatest");
     }
 }
 else
     {
     if(b>c)
	{
	 if(b>d)
	 printf("\n\n\t\t b is greatest");
	 else
	 printf("\n\n\t\t d is greatest");
	}
       else
	{
	 if (c>d)
	 printf("\n\n\t\t cis greatest");
	 else
	 printf("\n\n\t\t d is greatest:");
     }
  }
  printf("\n\n\t\tthanks you for using this programme***");
  getch();
 }