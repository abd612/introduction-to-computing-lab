#include <stdio.h>

int main (void)
{
	int c1,c2,c3,c4,c5,c6,c7,c8,c9;
	
	for (c5 = 1; c5 <= 4; c5++)
	{
		for (c6 = 4; c6 >= c5; c6--)
		{
			printf (" ");
		}
		for (c4 = 1; c4 <= 2*(c5-1); c4++)
		{
			printf ("*");
		}
		for (c8 = 4; c8 >= 2*(c5-1); c8--)
		{
			printf (" ");
		}
		for (c4 = 1; c4 <= 2*(c5-1); c4++)
		{
			printf ("*");
		}
		printf ("\n");
	}
	
	for (c1 = 1; c1 <= 10; c1++)
	{
		for (c2 = 1; c2 <= c1; c2++)
		{
			printf (" ");
		}
		for (c3 = 12; c3 >= 2*(c1-1); c3--)
		{
			printf ("*");
		}
		printf ("\n");
	}
	
	return 0;
}