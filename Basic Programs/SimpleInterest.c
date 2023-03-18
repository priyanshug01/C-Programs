#include<stdio.h>
int main()
{
	float p,r,t,si;
	printf("Enter Principle: ");
	scanf("%f",&p);
	printf("Enter Rate: ");
	scanf("%f",&r);
	printf("Enter No. of Years: ");
	scanf("%f",&t);
	si=(p*r*t)/100;
	printf("Total Amount: %.2f\n",si);
	printf("Simple Interest: %.2f",si-p);
	return 0;
}
