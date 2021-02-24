#include <stdio.h>

int main (void)
{
	int product, number, amount, day;
	float  cost, retail;
	
	for (day = 1; day <= 7; day++)
	{
		for (product = 1; product <= 5; product++)
		{
			printf ("Enter the product number and amount sold in one day: ");
			scanf ("%d %d", &number, &amount);
			
			switch (number)
			{
				case 1:
					cost = 2.98;
					cost *= amount;
					break;
					
				case 2:
					cost = 4.50;
					cost *= amount;
					break;
					
				case 3:
					cost = 9.98;
					cost *= amount;
					break;
					
				case 4:
					cost = 4.49;
					cost *= amount;
					break;
				
				case 5:
					cost = 6.87;
					cost *= amount;
					break;
				
				default:
					break;
			}
			
			retail += cost;
		}
		
		puts ("");
	}
	
	printf ("Total retail value of all products sold last week is $%.2f\n", retail);
	
	return 0;
}