#include<stdio.h>

int main(void)
{
	int account;
	float balance, charges, credits, limit;
	
	printf("Enter account number(-1 to end): ");
	scanf("%d", &account);
	
	while(account != -1)
	{
		printf("Enter current balance: ");
		scanf("%f", &balance);
		
		printf("Enter charges: ");
		scanf("%f", &charges);
		
		printf("Enter credits: ");
		scanf("%f", &credits);
		
		printf("Enter credit limit: ");
		scanf("%f", &limit);
			
		puts("");
		
		balance += charges - credits;
		
		if(balance > limit)
		{
			printf("Account number: %d\n", account);
			printf("Credit limit: %.2f\n", limit);
			printf("New balance: %.2f\n", balance);
			printf("Credit limit exceeded.\n\n");
		}
		
		else
			printf("Credit limit not exceeded.\n\n");
			
		printf("Enter account number(-1 to end): ");
		scanf("%d", &account);
	}
	
	return 0;
}
