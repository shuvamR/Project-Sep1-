#include<stdio.h>
void main()
{

int a,b,c;
	printf("Enter the 1st No.\n");
	scanf("%d",&a);
	printf("Enter the 2nd No.\n");
	scanf("%d",&b);
	printf("Enter the 3rd No.\n");
	scanf("%d",&c);
if(a==b)
	printf("%d\n",1);
else
{
	if(b==c)
		printf("%d\n",1);
	else
		printf("%d\n",0);
}
}


