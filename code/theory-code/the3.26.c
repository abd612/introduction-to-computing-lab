#include <stdio.h>

int main (void)
{
	int number, larger = 0, largest = 0, counter = 1;
	
	while (counter <= 10)
	{
		printf ("Enter a non-negative number: ");
		scanf ("%d", &number);
		
		if (number > largest)
		{
			larger = largest;
			largest = number;
		}
		
		else if (number > larger)
		{
			larger = number;
		}
		
		counter++;
	}
	
	printf ("\nThe two largest numbers are %d and %d\n", largest, larger);
	
	return 0;
}