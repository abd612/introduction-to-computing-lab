#include <stdio.h>

int main (void)
{
	int number, factorial, counter;
	
	printf ("Number\tFactorial\n");
	
	for (number = 1; number <= 5; number++)
	{
		for (counter = 1, factorial = 1; counter <= number; counter++)
		{
			factorial *= counter;
		}
		
		printf ("%d\t%d\n", number, factorial);
	}
		
	return 0;
}