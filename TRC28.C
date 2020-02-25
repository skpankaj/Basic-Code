#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,tab;
clrscr();
printf("\t\t\t\***table from 1 to 10***\n\n");
for (n=1;n<=10;n++)
{
	for(i=1;i<=10;i++)
	{
	tab=n*i;
	printf("%d\t",tab);
	}
printf("\n");
}
printf("\n\t\t ***thank you for using this programme***");
getch();
}
