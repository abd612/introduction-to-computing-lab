#include <stdio.h>

int power (int x, int y);

int main (void)
{
	int x, y;
	printf ("Enter two numbers: ");
	scanf ("%d %d", &x, &y);
	printf ("%d power %d is: %d\n", x, y, power (x, y));
	
	return 0;
}

int power (int x, int y)
{
	if (y == 0)
		return 1;
	
	else if (y == 1)
		return x;
	
	else
		return x * power (x, y - 1);
}