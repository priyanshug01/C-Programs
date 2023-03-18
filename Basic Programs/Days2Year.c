#include<stdio.h>
int main()
{
	int a,n,y,m,w,d;
	printf("Enter 1 If Leap Year\n");
	printf("Enter 2 If Not a Leap Year\n");
	printf("Enter Your Choice: ");
	scanf("%d",&a);
	switch (a)
    {
		case 1:
			printf("Enter No. of Days: ");
  			scanf("%d",&n);
  			y = n/366;
  			m = (n-(y*366))/30;
  			w = (n-(y*366)-(m*30))/7;
  			d = n-(y*366)-(m*30)-(w*7);
			printf("No. of Years: %d\n",y);
			printf("No. of Months: %d\n",m);
	      	printf("No. of Weeks: %d\n",w);
	      	printf("No. of Days: %d\n",d);
	      	break;
	
		case 2:
	   		printf("Enter No. of Days: ");
  			scanf("%d",&n);
  			y = n/365;
  			m = (n-(y*365))/30;
  			w = (n-(y*365)-(m*30))/7;
  			d = n-(y*365)-(m*30)-(w*7);
			printf("No. of Years: %d\n",y);
			printf("No. of Months: %d\n",m);
	      	printf("No. of Weeks: %d\n",w);
	      	printf("No. of Days: %d\n",d);
	      	break;
	    
	    default:
	    	printf("Wrong Choice!\n");
	      	break;
	}
	return 0;
}
