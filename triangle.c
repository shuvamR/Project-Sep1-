#include<stdio.h>
void main()
{
	int x,y,z;
	printf("Enter the 1st side of the triangle\n ");
	scanf("%d",&x);
	printf("Enter the 2nd sideof the triangle\n");
        scanf("%d",&y);
	printf("Enter the 3rd side of the triangle\n");
        scanf("%d",&z);
if(x+y>z)
{
	if(y+z>x)
	{
		if(x+z>y)
			printf("1");
	}
}
else
printf("0");
}
