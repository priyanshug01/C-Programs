#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("Enter Total No. of Rows: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=n;j>i+1;j--)
			printf("  ");
		for(k=0;k<=i;k++)
			printf(" %d",k+1);
		for(j=i;j>0;j--)
			printf(" %d",j);
		printf("\n");
	}
	return 0;
}
