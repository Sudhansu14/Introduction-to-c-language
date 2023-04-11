# include<stdio.h>
main()
{
	int a,b;
	printf("enter value a=");
	scanf("%d,",&a);
	printf("enter value b=");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("swapping value a=%d & b=%d",a,b);
}
