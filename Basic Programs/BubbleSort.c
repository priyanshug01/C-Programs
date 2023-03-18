#include<stdio.h>
int main()
{
	int n,a[20]={0},i,j,temp,c;
	printf("Enter Total Numbers: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter Number %d: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("Enter 1 for Increasing Sorting\n");
	printf("Enter 2 for Decreasing Sorting\n");
	printf("Enter Your Choice: ");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			for(i=0;i<n;i++)
			{
				for(j=1;j<n;j++)
				{
					if(a[j-1]>a[j])
					{
						temp=a[j];
						a[j]=a[j-1];
						a[j-1]=temp;
					}
				}
			}
			break;
			
		case 2:
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				{
					if(a[j]<a[j+1])
					{
						temp=a[j];
						a[j]=a[j+1];
						a[j+1]=temp;
					}
				}
			}
			break;
			
		default:
			printf("Wrong Choice!\n");
			break;
	}
	printf("Sorted Number: \n");
	for(i=0;i<n;i++)
		printf("a[%d]: %d\n",i+1,a[i]);
	return 0;
}
