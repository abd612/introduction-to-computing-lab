#include <stdio.h>

int main (void)
{
	int number, row = 1, column = 1;
	
	printf ("Enter a number: ");
	scanf ("%d", &number);
	
	while (row <= number)
	{
		column = 1;
		
		while (column <= number)
		{
			printf ("*");
			column++;
		}
		
		printf ("\n");
		row++;
	}
	
	return 0;
}