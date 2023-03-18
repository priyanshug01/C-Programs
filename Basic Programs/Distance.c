#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d;
	float dist;
	printf("Enter X1: ");
	scanf("%d",&a);
	printf("Enter Y1: ");
	scanf("%d",&b);
	printf("Enter X2: ");
	scanf("%d",&c);
	printf("Enter Y2: ");
	scanf("%d",&d);
	dist=sqrt(((c-a)*((c-a))+(d-b)*(d-b)));
	printf("Maximum of 3 Numbers: %.2f",dist);
	return 0;
}
