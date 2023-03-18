#include<stdio.h>
int main()
{
	int n,i,a[20],j,temp;
	printf("Enter Total Numbers: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter Number %d: ",i+1);
		scanf("%d",&a[i]);
	}
	j=n-1;
	for(i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		j--;
	}
	printf("Reversed Array: \n");
	for(i=0;i<n;i++)
		printf("a[%d]: %d\n",i+1,a[i]);
	return 0;
}
