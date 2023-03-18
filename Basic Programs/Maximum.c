#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("Enter 1st Number: ");
	scanf("%d",&a);
	printf("Enter 2nd Number: ");
	scanf("%d",&b);
	printf("Enter 3rd Number: ");
	scanf("%d",&c);
	max=a>b?(a>c?a:c):(b>c?b:c);
	printf("Maximum of 3 Numbers: %d",max);
	return 0;
}
