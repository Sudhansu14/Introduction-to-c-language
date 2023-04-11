#include<stdio.h>

main()
{
	int a,b,c;
	printf("enter value a=");
	scanf("%d",&a);
	printf(" enter value b=");
	scanf("%d",&b);
	
	c=a;
	a=b;
	b=c;
	printf("swapping of a=%d & b=%d",a,b);
	
}
