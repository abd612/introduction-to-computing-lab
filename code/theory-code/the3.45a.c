#include <stdio.h>

int main (void)
{
	int number, factorial = 1;
	
	printf ("Enter a non-negative integer: ");
	scanf ("%d", &number);
	
	while (number >= 1)
	{
		factorial*= number--;
	}
	
	printf ("The factorial is %d\n", factorial);
	
	return 0;
}