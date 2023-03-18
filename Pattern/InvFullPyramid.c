#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("Enter Total No. of Rows: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(k=0;k<i;k++)
			printf("  ");
		for(j=i;j<n;j++)
			printf(" *");
		for(j=n;j>i+1;j--)
			printf(" *");
		printf("\n");
	}
	return 0;
}
