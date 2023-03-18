#include<stdio.h>
int main()
{	
	int a,i,n,x,sum=0;;
	printf("Enter a Number: ");
	scanf("%d",&a);
	n=a;
	for(i=0;n!=0;i++)
	{
		x=n%10;
		sum=sum+(x*x*x);
		n=n/10;
	}
	printf("Cubed Number: %d\n",sum);
	if(sum==a)
		printf("It is an Armstrong Number!");
	else
		printf("It is Not an Armstrong Number!");
}
