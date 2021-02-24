#include <stdio.h>
#include <math.h>

int main (void)
{
	int number, reverse, quotient, remainder, counter;
	
	printf ("Enter a number: ");
	scanf ("%d", &number);

	quotient = number;
	
	for (counter = 0; number > 0; counter++)
	{
		number /= 10;
	}
	
	while (counter > 0)
	{
		remainder = quotient % 10;
		quotient /= 10;
		
		reverse += remainder * pow (10, --counter);
	}
	
	printf ("The number in reverse: %d\n", reverse);
	
	return 0;
}