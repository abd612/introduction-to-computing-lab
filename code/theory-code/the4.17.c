#include <stdio.h>

int main (void)
{
	int account, counter;
	float limit, newlimit, balance;
	
	for (counter = 1; counter <= 3; counter++)
	{
		printf ("Enter account number: ");
		scanf ("%d", &account);
		
		printf ("Enter previous credit limit: ");
		scanf ("%f", &limit);
		
		printf ("Enter current balance: ");
		scanf ("%f", &balance);
		
		newlimit = limit / 2;
		printf ("New limit: %.2f\n", newlimit);
		
		if (balance > newlimit)
		{
			printf ("Current balance exceeds the new limit.\n");
		}
		
		puts ("");
	}
	
	return 0;
}