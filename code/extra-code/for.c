#include <stdio.h>

int main (void)
{
	int sum, number;
	
	for (sum = 0, number = 0; number <= 100; number += 2)
	{
		sum += number;
	}
	
	printf ("Sum is %d\n", sum);
	
	return 0;
}