#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter 1st Number: ");
	scanf("%d",&a);
	printf("Enter 2nd Number: ");
	scanf("%d",&b);
	if(a>0 && b>0)
		printf("Quadrant I (+,+)");
	else if(a<0 && b>0)
		printf("Quadrant II (-,+)");
	else if(a<0 && b<0)
		printf("Quadrant III (-,-)");
	else if(a>0 && b<0)
		printf("Quadrant IV (+,-)");
	else if((a==0 && b!=0) || (a!=0 && b==0))
		printf("Lies on Axis");
	else
		printf("Origin (0,0)");
	return 0;
}
