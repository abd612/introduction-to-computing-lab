#include <stdio.h>

int main (void)
{
	int b = 1, c = 0;
	
	b = 1;
	
	while (b < 200)
	{
		if (b == 2 || b == 24)
		{
			b += 1;
			printf ("%d\n", b);
			c++;
		}
		
		b *= 2;
		printf ("%d\n", b);
		c++;
	}
	
	printf ("Steps: %d\n", c);
	
	return 0;
}