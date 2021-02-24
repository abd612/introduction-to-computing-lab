#include <stdio.h>

int main (void)
{
	int number, counter1, counter2, counter3;
	
	printf ("Enter a number: ");
	scanf ("%d", &number);
	
	for (counter1 = 1; counter1 <= number; counter1++)
	{
		for (counter2 = number; counter2 > counter1; counter2--)
		{
			printf (" ");
		}
		
		for (counter3 = 0; counter3 < (2 * counter1 - 1); counter3++)
		{
			printf ("*");
		}
		
		printf ("\n");
	}
	
	for (counter1 = 1; counter1 < number; counter1++)
	{
		for (counter2 = 0; counter2 < counter1; counter2++)
		{
			printf (" ");
		}
		
		for (counter3 = (2 * number - 1); counter3 > (2 * counter1); counter3--)
		{
			printf ("*");
		}
		
		printf ("\n");
	}
	
	return 0;
}