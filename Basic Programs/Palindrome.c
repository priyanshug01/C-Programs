#include<stdio.h>
int main()
{	
	int a,i,n,x,sum=0;
	printf("Enter a Number: ");
	scanf("%d",&a);
	n=a;
	for(i=0;n!=0;i++)
	{
		x=n%10;
		sum=sum*10+x;
		n=n/10;
	}
	if(sum==a)
		printf("It is a Palindrome Number!");
	else
		printf("It is Not a Palindrome Number!");
	return 0;
}
