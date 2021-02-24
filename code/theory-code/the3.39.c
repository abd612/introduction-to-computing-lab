#include <stdio.h>

int main (void)
{
	int row = 1, column = 1;
	
	while (row <= 8)
	{
		column = 1;
		
		if (row % 2 == 1)
		{
			while (column <= 8)
			{
				printf ("%s", "* ");
				column++;
			}
		}
		
		else
		{
			printf ("%s", " ");
			
			while (column <= 8)
			{
			printf ("%s", "* ");
			column++;
			}
		}
		
		puts ("");
		row++;
	}
	
	return 0;
}