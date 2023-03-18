#include<stdio.h>
int main()
{
	int n,i,j;
	char c='A';
	printf("Enter Total No. of Rows: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
			printf("%c ",c);
		printf("\n");
		c++;
	}
	return 0;
}
