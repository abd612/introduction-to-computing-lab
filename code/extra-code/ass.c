#include <stdio.h>

int input (void);
int fibonacci (int n);
int factorial (int n);

int main (void)
{
	printf ("Enter a number for factorial: ");
	printf ("Factorial is: %d\n", factorial (input()));
	
	printf ("Enter a number for fibonacci series: ");
	printf ("Fibonacci series is: %d\n", fibonacci (input()));
	return 0;
}

int input (void)
{
	int n;
	scanf ("%d", &n);
	return n;
}

int factorial (int n)
{
	if (n == 0)
		return 1;
	
	return n * factorial (n - 1);
}

int fibonacci (int n)
{
	if (n == 1)
		return 0;
	
	if (n == 2)
		return 1;
	
	return fibonacci (n - 1) + fibonacci (n - 2);
}
