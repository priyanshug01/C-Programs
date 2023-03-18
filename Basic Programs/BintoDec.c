#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter Binary Number: ");
	scanf("%d",&n);
	for(i=0;n>0;i++)
	{
		a[i]=n%2;
		n=n*2;
	}
	printf("Decimal Number: %d",n);
	
	return 0;
}
