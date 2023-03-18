// a + b + c + d = n
#include<stdio.h>
int main()
{
	int a,b,c,d,n,count;
	printf("Enter the Number: ");
	scanf("%d",&n);
	for(a=0;a<=n;a++)
	{
		for(b=0;b<=n;b++)
		{
			for(c=0;c<=n;c++)
			{
				for(d=0;d<=n;d++)
				{
					if((a+b+c+d)==n)
						count++;
				}
			}
		}
	}
	printf("Total No. of Combinations: %d",count);
	return 0;
}
