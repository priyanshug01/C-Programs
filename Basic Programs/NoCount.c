#include<stdio.h>
int main()
{
	int a[20],n,i,p=0,n1=0,z=0;
	printf("Enter Total Numbers: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter No. %d: ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
			p++;
		else if(a[i]<0)
			n1++;
		else
			z++;
	}
	printf("Total Positive Numbers: %d\n",p);
	printf("Total Negative Numbers: %d\n",n1);
	printf("Total Zeros: %d",z);
	return 0;
}
