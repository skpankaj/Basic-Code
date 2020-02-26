#include<stdio.h>
#include<conio.h>
void main()
{
int i,n=1,tab;
clrscr();
printf("\t\t table from 1 to 10\n\n" );
while(n<=10)
{
   tab=1;i=1;
   while (i<=10)
   {
   tab=n*i;
   i++;
   printf("%d\t",tab);
   }
   printf("\n");
   n++;
}
printf("\n\n\t\tthank you for using this programme");
getch();
}