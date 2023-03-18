#include<stdio.h>
int main()
{
	int i,a[10],n;
	printf("Enter Decimal Number: ");
	scanf("%d",&n);
	for(i=0;n>0;i++)
	{
		a[i]=n%2;
		n=n/2;
	}
	printf("Binary Number: ");
	for(i=i-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
	return 0;
}
