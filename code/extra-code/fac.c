#include <stdio.h>
#include <math.h>

int f (int x)
{
	int c, f = 1;
	
	for (c = 1; c <= x; c++)
	{
		f *= c;
	}
	
	return f;
}

int main (void)
{
	int x;
	
	printf ("Enter an integer: ");
	scanf ("%d", &x);
	
	printf ("Factorial of %d is: %d\n", x, f (x));
	
	return 0;
}