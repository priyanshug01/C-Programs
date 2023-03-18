#include<stdio.h>
int main()
{
	int a[20],n,i,max=0,min=9,p1,p2;
	printf("Enter Total Numbers: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter No. %d: ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
			p1=i;
		}
		if(min>a[i])
		{
			min=a[i];
			p2=i;
		}
	}
	printf("Maximum Number is %d at Position %d\n",max,p1+1);
	printf("Minimum Number is %d at Position %d\n",min,p2+1);
	return 0;
}
