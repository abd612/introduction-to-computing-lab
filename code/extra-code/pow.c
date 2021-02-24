#include <stdio.h>

float p (int x, int y)
{
	float z = 1;
	int c;
	
	if (y >= 0)
	{
		for (c = 1; c <= y; c++)
		{
			z *= x;
		}
	}
	
	if (y < 0)
	{
		for (c = -1; c >= y; c--)
		{
			z /= x;
		}
	}
	
	return z;
}

int main (void)
{
	int x, y;
	
	printf ("Enter a pair of integers: ");
	scanf ("%d %d", &x, &y);
	
	printf ("%d raised to power %d is: %.2f\n", x, y, p (x, y));
	
	return 0;
}