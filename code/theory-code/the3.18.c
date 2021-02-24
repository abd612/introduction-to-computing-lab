#include <stdio.h>

int main (void)
{
	float sales, salary;
	
	while (sales != -1)
	{
		printf ("Enter sales in dollars (-1 to end): ");
		scanf ("%f", &sales);
		
		if (sales != -1)
		{
			printf ("Salary is: $%.2f\n\n", 200 + 9 * sales / 100);
		}
	}
	
	return 0;
}