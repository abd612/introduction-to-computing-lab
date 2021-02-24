#include <stdio.h>

int main (void)
{
	int account;
	float beginning, charges, credits, limit, balance;
	
	while (account != -1)
	{
		printf ("Enter account number (-1 to end): ");
		scanf ("%d", &account);
		
		if (account != -1)
		{
			printf ("Enter beginning balance: ");
			scanf ("%f", &beginning);
			
			printf ("Enter total charges: ");
			scanf ("%f", &charges);
			
			printf ("Enter total credits: ");
			scanf ("%f", &credits);
			
			printf ("Enter credit limit: ");
			scanf ("%f", &limit);
			
			balance = beginning + charges - credits;
			
			if (balance > limit)
			{
				printf ("Account:      %d\n", account);
				printf ("Credit limit: %.2f\n", limit);
				printf ("Balance:      %.2f\n", balance);
				puts ("Credit Limit Exceeded.");
			}
			
			printf ("\n");
		}
	}
	
	return 0;
}