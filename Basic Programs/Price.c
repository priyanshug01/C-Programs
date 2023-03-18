#include<stdio.h>
int main()
{
	float n,n1,diff;
	printf("Enter Old Price: ");
	scanf("%f",&n);
	printf("Enter New Price: ");
	scanf("%f",&n1);
	diff=n1-n;
	if(diff>=0)
	{
		printf("Increased Price: %.2f\n",diff);
		printf("Increased Percentage: %.2f%",(diff/n)*100);
	}
	else
	{
		diff = diff*(-1);
		printf("Decreased Price: %.2f\n",diff);
		printf("Decreased Percentage: %.2f%",(diff/n)*100);
	}
	return 0;	
}
