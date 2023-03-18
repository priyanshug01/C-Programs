// S = 1 + 1/2 + 1/3 + … + 1/n
#include<stdio.h>
int main()
{
	int i,n;
	float s=0;
	printf("Enter the Limit: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s+=1/(float)i;
	}
	printf("%.2f",s);
	return 0;
}
