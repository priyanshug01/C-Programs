#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,t,ci;
	printf("Enter Principle: ");
	scanf("%f",&p);
	printf("Enter Rate: ");
	scanf("%f",&r);
	printf("Enter No. of Years: ");
	scanf("%f",&t);
	ci=p*pow((1+(0.01*r)),t);
	printf("Total Amount: %.2f\n",ci);
	printf("Coumpound Interest: %.2f",ci-p);
	return 0;
}
