#include <stdio.h>

int main (void)
{
	int counter = 1, number = 1, factorial = 1;
	float e = 1;
	
	while (counter <= 10)
	{
		while (number >= 1)
		{
			factorial *= number--;
		}
		
		e += (1.00 / factorial);
		counter++;
		number = counter;
		factorial = 1;
	}
	
	printf ("The value of e is %f\n", e);
	
	return 0;
}