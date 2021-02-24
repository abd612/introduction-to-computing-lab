#include <stdio.h>

int main (void)
{
	int number, row = 1, column = 1;
	
	printf ("Enter a number: ");
	scanf ("%d", &number);
	
	while (row <= number)
	{
		if (row == 1 || row == number)
		{
			column = 1;
			
			while (column <= number)
			{
				printf ("*");
				column++;
			}
		}
		
		else
		{
			column = 1;
			
			while (column <= number)
			{
				if (column == 1 || column == number)
				{
					printf ("*");
				}
				
				else
				{
					printf (" ");
				}
				
				column++;
			}
		}
		
		printf ("\n");
		row++;
	}
	
	return 0;
}