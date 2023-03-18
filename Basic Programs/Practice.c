#include<stdio.h>
int main()
{
	int a,b,i,j,count=0;
	printf("Enter No. of Lines: ");
	scanf("%d",&a);
	printf("Enter No. of Digits in a Line: ");
	scanf("%d",&b);
	printf("Output: \n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			count++;
			printf("%d ",count);
		}
		printf("\n");
	}
	return 0;
}
