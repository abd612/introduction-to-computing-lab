#include <stdio.h>

int main (void)
{
	int number, digit, reverse;
	
	printf ("Enter a number: ");
	scanf ("%d", &number);
	
	while (number > 0)
	{
		digit = number % 10;
		number /= 10;
		reverse *= 10;
		reverse += digit;
	}
	
	printf ("Reverse is %d", reverse);
	
	return 0;
}
