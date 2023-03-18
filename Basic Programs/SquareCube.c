#include<stdio.h>
int main()
{
	int i,n;
	float s=0;
	printf("Enter the Limit: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		printf("%d %d %d\n",i,i*i,i*i*i);
	return 0;
}
