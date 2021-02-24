#include <stdio.h>

int main (void)
{
	int number, digit1, digit2, digit3, digit4, digit5;
	
	printf ("Enter a five digit number: ");
	scanf ("%d", &number);
	
	digit5 = number % 10;
	number /= 10;
	
	digit4 = number % 10;
	number /= 10;
	
	digit3 = number % 10;
	number /= 10;
	
	digit2 = number % 10;
	number /= 10;
	
	digit1 = number;
	
	if (digit1 == digit5 && digit2 == digit4)
	{
		printf ("The number is a palindrome.\n");
	}
	
	else
	{
		printf ("The number is not a palindrome.\n");
	}
	
	return 0;
}