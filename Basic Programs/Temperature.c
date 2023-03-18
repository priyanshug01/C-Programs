#include<stdio.h>
int main()
{
	int n;
	float temp,c,f;
	printf("Enter 1 to Convert C to F\n");
	printf("Enter 2 to Convert F to C\n");
	printf("Enter Your Choice: ");
	scanf("%d",&n);
	printf("Enter Temperature: ");
	scanf("%f",&temp);	
	switch (n)
	{
		case 1:
			f = (temp*((float)9/5)) + 32.0;
			printf("Temperature in Fahrenheit: %.2f",f);
			break;
			
		case 2:
			c = (temp-32.0)*((float)5/9);
			printf("Temperature in Celsius: %.2f",c);
			break;
			
		default:
			printf("Wrong Choice!\n");
			break;
	}
	return 0;
}
