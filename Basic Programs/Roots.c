#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float root1,root2,d;
	printf("Enter 1st Number: ");
	scanf("%d",&a);
	printf("Enter 2nd Number: ");
	scanf("%d",&b);
	printf("Enter 3rd Number: ");
	scanf("%d",&c);
	d=sqrt((b*b)-(4*a*c));
	root1=(-b+d)/(2*a);
	root2=(-b-d)/(2*a);
	printf("Roots are: %.2f %.2f",root1,root2);
	return 0;
}
