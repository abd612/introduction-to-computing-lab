#include <stdio.h>

int main (void)

{
	int x, y, z;
	
	printf ("Enter two integers:\n");
	scanf ("%d %d", &x, &y);
	
	z = x % y;
	
	if (z == 0)
	{
		printf ("%d is a multiple of %d", x, y);
	}
	
	else
	{
		printf ("%d is not a multiple of %d", x, y);
	}
	
	return 0;
}