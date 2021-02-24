// Made by: Muhammad Abdullah, 2015-EE-166

#include <stdio.h>

int main (void)
{
	int number, counter1 = 0, counter2 = 0;
	
	printf ("Enter a number, upto which rows with increasing asterisks will be printed: ");
	scanf ("%d", &number);
	
	while (counter1 < number)
	{
		while (counter2 < counter1)
		{
			printf ("*");
			counter2 = counter2 + 1;
		}
		
		printf ("*\n");
		counter1 = counter1 + 1;
		counter2 = 0;
	}
	
	return 0;
}

// Made by: Muhammad Abdullah, 2015-EE-166