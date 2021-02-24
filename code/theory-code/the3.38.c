#include <stdio.h>

int main (void)
{
	int number, counter = 0;
	
	printf ("Enter a number: ");
	scanf ("%d", &number);
	
	while (number != 0)
	{
		if (number % 10 == 7)
		{
			counter++;
		}
		
		number /= 10;
	}
	
	printf ("There are %d 7s in the number.\n", counter);
	
	return 0;
}