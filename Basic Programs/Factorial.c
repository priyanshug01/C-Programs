#include<stdio.h>
int main()
{
	int n,i,sum=1;
	printf("Enter a Number: ");
	scanf("%d",&n);
	for(i=n;i>0;i--)
		sum=sum*i;
	printf("Factorial is: %d",sum);
	return 0;
}
