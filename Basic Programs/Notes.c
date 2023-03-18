#include<stdio.h>
int main()
{
	int n,a,b,c,d,e,f,g,h,i,j;
	printf("Enter Amount: ");
	scanf("%d",&n);
	a = n/2000;
	b = (n-(a*2000))/500;
	c = (n-(a*2000)-(b*500))/200;
	d = (n-(a*2000)-(b*500)-(c*200))/100;
	e = (n-(a*2000)-(b*500)-(c*200)-(d*100))/50;
	f = (n-(a*2000)-(b*500)-(c*200)-(d*100)-(e*50))/20;
	g = (n-(a*2000)-(b*500)-(c*200)-(d*100)-(e*50)-(f*20))/10;
	h = (n-(a*2000)-(b*500)-(c*200)-(d*100)-(e*50)-(f*20)-(g*10))/5;
	i = (n-(a*2000)-(b*500)-(c*200)-(d*100)-(e*50)-(f*20)-(g*10)-(h*5))/2;
	j = n-(a*2000)-(b*500)-(c*200)-(d*100)-(e*50)-(f*20)-(g*10)-(h*5)-(i*2);
	printf("Notes of Rs.2000: %d\n",a);
	printf("Notes of Rs.500: %d\n",b);
	printf("Notes of Rs.200: %d\n",c);
	printf("Notes of Rs.100: %d\n",d);
	printf("Notes of Rs.50: %d\n",e);
	printf("Notes of Rs.20: %d\n",f);
	printf("Notes of Rs.10: %d\n",g);
	printf("Notes of Rs.5: %d\n",h);
	printf("Notes of Rs.2: %d\n",i);
	printf("Notes of Rs.1: %d\n",j);
	return 0;
}
