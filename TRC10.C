#include<stdio.h>
#include<conio.h>
void main()
{
float  m1,m2,m3,m4,m5,total,per;
clrscr();
printf("\t\t **get your result according to marks***");
printf("\n\n enter the marks in m1:");
scanf("%f",&m1);
printf("\n\n enter the marks in m2:");
scanf("%f",&m2);
printf("\n\n enter the marks in m3:");
scanf("%f",&m3);
printf("\n\n enter in the marks in m4:");
scanf("%f",&m4);
printf("\n\n enter in the marks in m5:");
scanf("%f",&m5);
total=m1+m2+m3+m4+m5;
per=total/5;
printf("\n\n total=%f",total);
if(per<100)
printf("\n\n per=%f",per);
else
printf("\n\n invalid marking in paper please check:");
if((per>=60)&&(per<100))
printf("\n\nist division");
if((per>=45)&&(per<60))
printf("\n\nsecond division");
if((per>=30)&&(per<45))
printf("\n\nthird division");
if(per<30)
{
printf("fail");
}
printf("\n\n\t\t***Thank you for using this programme***");
getch();
}
