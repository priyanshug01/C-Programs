#include<stdio.h>
int main()
{
	int n,h,m,s;
	printf("Enter Amount: ");
	scanf("%d",&n);
	h = n/3600;
	m = (n-(h*3600))/60;
	s = n-(h*3600)-(m*60);
	printf("Total Hours: %d\n",h);
	printf("Total Minutes: %d\n",m);
	printf("Total Seconds: %d\n",s);
	return 0;
}
