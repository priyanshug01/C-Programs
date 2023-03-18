#include<stdio.h>
int main()
{	
	int i,n,flag=0;
	printf("Enter a Number: ");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if((n%i)==0)
		{
			printf("It is Not a Prime Number!");
			flag=1;
			break;	
		}
	}
	if(flag==0)
		printf("It is a Prime Number!");
	return 0;
}
