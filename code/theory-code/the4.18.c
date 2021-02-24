#include <stdio.h>

int main (void)
{
	int number, counter1, counter2;
	
	for (counter1 = 1; counter1 <= 5; counter1++)
	{
		printf ("Enter a number: ");
		scanf ("%d", &number);
		
		for (counter2 = 1; counter2 <= number; counter2++)
		{
			printf ("*");
		}
		
		puts ("");
	}
	
	return 0;
}