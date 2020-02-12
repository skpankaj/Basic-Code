#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
clrscr();
printf("\t\t\tprime no between 2 to 100\n");
for(n=2;n<=100;n++)
{
	for(i=2;i<n;i++)
	{
	if(n%i==0)
	break;
	}
	if(n==i)
	printf("prime no=%d\t",n);
}
getch();
}