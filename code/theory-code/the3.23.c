#include <stdio.h>

int main (void)
{
	int number, counter = 1, largest = 0;
	
	while (counter <= 10)
	{
		printf ("Enter a non-negative number: ");
		scanf ("%d", &number);
		
		if (number > largest)
		{
			largest = number;
		}
		
		counter++;
	}
	
	printf ("\nLargest of the numbers is %d\n", largest);
	
	return 0;
}