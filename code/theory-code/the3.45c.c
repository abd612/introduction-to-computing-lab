#include <stdio.h>
#include <math.h>

int main (void)
{
	int x, counter = 1, number = 1, factorial = 1;
	float e = 1;
	
	printf ("Enter the value of x: ");
	scanf ("%d", &x);
	
	while (counter <= 10)
	{
		while (number >= 1)
		{
			factorial *= number--;
		}
		
		e += (pow (x, counter++) / factorial);
		number = counter;
		factorial = 1;
	}
	
	printf ("The value of e^x is %f\n", e);
	
	return 0;
}