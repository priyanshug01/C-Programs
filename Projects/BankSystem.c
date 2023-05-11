#include<stdio.h>

void Details()
{
	printf("\nName: Priyanshu Gupta\n");
	printf("Account No.: 87567326\n");
	printf("Phone No.: 97643501xx\n");
	printf("Email Id: example56@gmail.com\n");
}

float Deposit()
{
	float amount;
	printf("Enter Amount to Deposit: ");
	scanf("%f",&amount);
	return amount;
}

float SWithdraw(float bal)
{
	float amount;
	printf("Enter Amount to Withdraw: ");
	scanf("%f",&amount);
	if(amount>bal)
	{
		printf("\nInsufficient Balance!\n");
		return bal;
	}
	else
	{
		printf("\nAmount Withdrawn!\n");
		bal-=amount;
		return bal;
	}
}

float CWithdraw(float bal)
{
	float amount,fine=500.0;
	printf("Enter Amount to Withdraw: ");
	scanf("%f",&amount);
	if(bal<5000.0)
	{
		printf("\nServices Charges: %.1f\n",fine);
		bal=bal-fine;
	}
	if(amount>bal)
	{
		printf("Insufficient Balance!\n");
		return bal;
	}
	else
	{
		printf("Amount Withdrawn!\n");
		bal-=amount;
		return bal;
	}
}

int main()
{
	char ch;
	float balance=25000.0,interest;
	int time,a;
	printf("Welcome to Bank!\n");
	printf("Enter S for Savings Account\n");
	printf("Enter C for Current Account\n");
	printf("Enter Your Choice: ");
	scanf("%c",&ch);
	if(ch=='s' || ch=='S')
	{
		while(1)
		{
			printf("\nEnter 1 to Check Details\n");
			printf("Enter 2 to Deposit Money\n");
			printf("Enter 3 to Withdraw Money\n");
			printf("Enter 4 to Check Balance\n");
			printf("Enter 5 to Calculate Interest\n");
			printf("Enter 6 to Exit\n");
			printf("Enter Your Choice: ");
			scanf("%d",&a);
			switch(a)
			{
				case 1:
					Details();
					break;
					
				case 2:
					balance+=Deposit();
					printf("\nAmount Deposited!\n");
					break;
					
				case 3:
					balance=SWithdraw(balance);
					break;
					
				case 4:
					printf("\nUpdated Balance: %.1f\n",balance);
					break;
					
				case 5:
					printf("Enter Time in Months: ");
					scanf("%d",&time);
					interest=balance*(0.05/12)*((float)time);
					printf("\nCalculated Interest: %.2f\n",interest);
					break;
					
				case 6:
					printf("\nThanks for Visiting!\n");
					return 0;
					
				default:
					printf("Wrong Choice!\n");
			}
		}
	}
	else if(ch=='c' || ch=='C')
	{
		while(1)
		{
			printf("\nEnter 1 to Check Details\n");
			printf("Enter 2 to Deposit Money\n");
			printf("Enter 3 to Withdraw Money\n");
			printf("Enter 4 to Check Balance\n");
			printf("Enter 5 to Exit\n");
			printf("Enter Your Choice: ");
			scanf("%d",&a);
			switch(a)
			{
				case 1:
					Details();
					break;
					
				case 2:
					balance+=Deposit();
					printf("\nAmount Deposited!\n");
					break;
					
				case 3:
					balance=CWithdraw(balance);
					break;
					
				case 4:
					printf("\nUpdated Balance: %.1f\n",balance);
					break;
					
				case 5:
					printf("\nThanks for Visiting!\n");
					return 0;
					
				default:
					printf("Wrong Choice!\n");
			}
		}
	}
	else
		printf("Wrong Choice!");
	return 0;
}
