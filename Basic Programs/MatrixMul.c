#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],mul[10][10],i,j,k,r,c;
	printf("Enter No. of Rows: ");
	scanf("%d",&r);
	printf("Enter No. of Columns: ");
	scanf("%d",&c);
	printf("Enter Elements of Matrix 1: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf(" ");
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("Enter Elements of Matrix 2: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf(" ");
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			mul[i][j]=0;
			for(k=0;k<c;k++)
			{
				mul[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	printf("Multiplication of Two Matrices: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf(" %d",mul[i][j]);
		}
		printf("\n\n");
	}
	return 0;
}
