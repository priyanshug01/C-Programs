#include<stdio.h>
int main()
{
	int a[20],n,i,b=0;
	printf("Enter Total Numbers: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter Number %d: ",i+1);
		scanf("%d",&a[i]);
		b+=a[i];
	}
	printf("Average of %d Numbers is: %.2f",n,(float)b/n);
	return 0;
}
