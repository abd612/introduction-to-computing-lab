#include <stdio.h>

int main (void)

{
	int x, y;
	
	printf ("Enter an integer and I'll tell you if it's even or odd: ");
	scanf ("%d", &x);
	
	y = x % 2;
	
	if (y == 0)
	{
		printf ("%d is even\n", x);
	}
	else
	{
		printf ("%d is odd\n", x);
	}
	
	return 0;
}