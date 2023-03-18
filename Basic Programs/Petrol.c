#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("Enter Total Distance: ");
	scanf("%d",&a);
	printf("Enter Total Fuel Consumed: ");
	scanf("%d",&b);
	printf("Average Consumption: %.2f",(float)a/b);
	return 0;
}
