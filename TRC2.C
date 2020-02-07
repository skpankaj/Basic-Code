#include<stdio.h>
#include<conio.h>
void main()
{
int age;
char sex;
clrscr();
printf("\t\t***qualification of insurance");
printf("\n\n enter your age:" );
scanf("%d",&age);
fflush(stdin);
printf("\n\n enter your sex:");
scanf("%c",&sex);

if(sex=='m')
{
	if(age>=30)
	printf("\n\n\t\tinsured man");
	else
	printf("\n\n\t\t sorry not insured");
}
if(sex=='f')
{
printf("\n\n\t\t\t welcome all girls and women are insured");
}
printf("\n\n\t\t thanks you for using this programme:");
getch();
}