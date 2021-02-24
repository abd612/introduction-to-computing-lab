#include <stdio.h>

int main (void)
{
	int a;
	printf ("Enter a number:\n");
	scanf ("%d", &a);
	
	if (a == 2 || a == 3 || a == 5)
	{
		printf ("%d is a prime number.\n", a);
	}
	
	else
	{
		if (a ==1)
		{
			printf ("%d is a composite number.\n", a);
		}
		
		else
		{
			if (a % 2 != 0 && a % 3 != 0 && a % 5 != 0)
			{
				printf ("%d is a prime number.\n", a);
			}
	
			else
			{
				printf ("%d is a composite number.\n", a);
			}
		}
	}
	
	return 0;
}