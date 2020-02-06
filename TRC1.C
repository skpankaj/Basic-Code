/*sarvendra kumar pankaj) & co......C++
elder between three[tr1.c]*/
#include<stdio.h>
#include<conio.h>
void main()
{
int ram,shayam,ajay;
clrscr();
printf("\t\t**check the elder person between three**");
printf("\n\n enter the age of ram:");
scanf("%d",&ram);
printf("\n\n enter the age of shayam:");
scanf("%d",&shayam);
printf("\n\nenter the age of ajay;");
scanf("%d",&ajay);
if((ram>shayam)&&(ram>ajay))
{
printf("\n\nram is elder than shayam &ajay");
}
if((shayam>ram)&&(shayam>ajay))
{
printf("\n\nshayam is elder than ram & ajay");
}
if((ajay>ram)&&(ajay>shayam));
{
printf("\n\najay is elder than ram & shayam");
}
printf("\n\n\t\tthank you for using this programme");
getch();
}
