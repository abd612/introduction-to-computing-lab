#include <stdio.h>

int main (void)
{
	int counter = 1;
	
	while (1 > 0)
	{
		counter *= 2;
		printf ("%d\n", counter);
	}
	
	return 0;
}