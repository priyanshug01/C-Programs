#include<stdio.h>
#include<math.h>
int main()
{
	int a=0,b,c,d,e,f;
	float q1,q2,q3,q4,tprice=0;
	printf("Welcome To Beverages Shop!");
	while(a!=5)
	{
		printf("\nEnter 1 for Tea\n");
		printf("Enter 2 for Coffee\n");
		printf("Enter 3 for Milkshakes\n");
		printf("Enter 4 for Coolers\n");
		printf("Enter 5 to Exit\n");
		printf("Enter Your Choice: ");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				printf("\nEnter 1 for Milk Tea (Rs.10)\n");
				printf("Enter 2 for Lemon Tea (Rs.15)\n");
				printf("Enter 3 for Green Tea (Rs.20)\n");
				printf("Enter 4 for Lemon Iced Tea (Rs.40)\n");
				printf("Enter Your Choice: ");
				scanf("%d",&b);
				switch(b)
				{
					case 1:
						printf("Enter Quantity: ");
						scanf("%f",&q1);
						tprice += (q1*10.0);
						break;
					
					case 2:
						printf("Enter Quantity: ");
						scanf("%f",&q2);
						tprice += (q2*15.0);
						break;
						
					case 3:
						printf("Enter Quantity: ");
						scanf("%f",&q3);
						tprice += (q3*20.0);
						break;
						
					case 4:
						printf("Enter Quantity: ");
						scanf("%f",&q4);
						tprice += (q4*40.0);
						break;
						
					default:
						printf("Wrong Choice!\n");
						break;
				}
				break;
				
			case 2:
				printf("\nEnter 1 for Milk Coffee (Rs.15)\n");
				printf("Enter 2 for Black Coffee (Rs.15)\n");
				printf("Enter 3 for Espresso (Rs.40)\n");
				printf("Enter 4 for Cold Coffee (Rs.50)\n");
				printf("Enter Your Choice: ");
				scanf("%d",&c);
				switch(c)
				{
					case 1:
						printf("Enter Quantity: ");
						scanf("%f",&q1);
						tprice += (q1*15.0);
						break;
					
					case 2:
						printf("Enter Quantity: ");
						scanf("%f",&q2);
						tprice += (q2*15.0);
						break;
						
					case 3:
						printf("Enter Quantity: ");
						scanf("%f",&q3);
						tprice += (q3*40.0);
						break;
						
					case 4:
						printf("Enter Quantity: ");
						scanf("%f",&q4);
						tprice += (q4*50.0);
						break;
						
					default:
						printf("Wrong Choice!\n");
						break;
				}
				break;	
			
			case 3:
				printf("\nEnter 1 for Chocolate Milkshake (Rs.40)\n");
				printf("Enter 2 for Mango Milkshake (Rs.50)\n");
				printf("Enter 3 for Kitkat Milkshake (Rs.50)\n");
				printf("Enter 4 for Oreo Milkshake (Rs.70)\n");
				printf("Enter Your Choice: ");
				scanf("%d",&d);
				switch(d)
				{
					case 1:
						printf("Enter Quantity: ");
						scanf("%f",&q1);
						tprice += (q1*50.0);
						break;
					
					case 2:
						printf("Enter Quantity: ");
						scanf("%f",&q2);
						tprice += (q2*70.0);
						break;
						
					case 3:
						printf("Enter Quantity: ");
						scanf("%f",&q3);
						tprice += (q3*40.0);
						break;
						
					case 4:
						printf("Enter Quantity: ");
						scanf("%f",&q4);
						tprice += (q4*50.0);
						break;
						
					default:
						printf("Wrong Choice!\n");
						break;
				}
				break;
			
			case 4:
				printf("\nEnter 1 for Aam Panna (Rs.30)\n");
				printf("Enter 2 for Lemonade (Rs.30)\n");
				printf("Enter 3 for Mojito (Rs.50)\n");
				printf("Enter 4 for Falooda (Rs.80)\n");
				printf("Enter Your Choice: ");
				scanf("%d",&e);
				switch(e)
				{
					case 1:
						printf("Enter Quantity: ");
						scanf("%f",&q1);
						tprice += (q1*30.0);
						break;
					
					case 2:
						printf("Enter Quantity: ");
						scanf("%f",&q2);
						tprice += (q2*30.0);
						break;
						
					case 3:
						printf("Enter Quantity: ");
						scanf("%f",&q3);
						tprice += (q3*50.0);
						break;
						
					case 4:
						printf("Enter Quantity: ");
						scanf("%f",&q4);
						tprice += (q4*80.0);
						break;
						
					default:
						printf("Wrong Choice!\n");
						break;
				}
				break;
				
			case 5:
				break;
				
			default:
				printf("Wrong Choice!\n");
				break;
		}
	}
	if(tprice<=200.0)
	{
		printf("\nTotal Bill Amount: Rs. %.2f",tprice);
		printf("\nDiscount Applied: 0.0%%");
		printf("\nFinal Bill Amount: Rs. %.2f",tprice);
	}
	else if(tprice<=500.0 && tprice>200.0)
	{
		printf("\nTotal Bill Amount: Rs. %.2f",tprice);
		printf("\nDiscount Applied: 5.0%%");
		printf("\nFinal Bill Amount: Rs. %.2f",round(tprice*0.95));
	}
	else if(tprice<=1000.0 && tprice>500.0)
	{
		printf("\nTotal Bill Amount: Rs. %.2f",tprice);
		printf("\nDiscount Applied: 10.0%%");
		printf("\nFinal Bill Amount: Rs. %.2f",round(tprice*0.90));
	}
	else
	{
		printf("\nTotal Bill Amount: Rs. %.2f",tprice);
		printf("\nDiscount Applied: 20.0%%");
		printf("\nFinal Bill Amount: Rs. %.2f",round(tprice*0.80));
	}
	printf("\nThank You!");
	return 0;
}

/*
	printf("\nEnter 1 for Cash");
	printf("\nEnter 2 for Debit/Credit Card");
	printf("\nEnter 3 for NetBanking");
	printf("\nSelect Payment Method: ");
	scanf("%d",&f);
	switch(f)
	{
		case 1:
			printf("Enter Cash Amount: ");
			scanf("%f",&p1);
			
			
	}

*/
