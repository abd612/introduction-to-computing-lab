#include <stdio.h>
#include <math.h>

int main (void)
{
	int number, digit, power = 0, result = 0;
	
	printf ("Enter a bindary number (consisting of 0z and 1s only): ");
	scanf ("%d", &number);
	
	while (number != 0)
	{
		digit = number % 10;
		number /= 10;
		result += digit * pow (2, power++);
	}
	
	printf ("The decimal equivalency of binary is %d\n", result);
	
	return 0;
}