#include <stdio.h>

int input (void);
int check1 (int n);
int check2 (int n);
int fibonacci (int n);
int factorial (int n);

int main (void)
{
	printf ("Enter a number for factorial: ");
	int a = input ();
	
	if (check1 (a) == 1)
		printf ("Factorial is: %d\n", factorial (a));
	
	printf ("Enter a number for fibonacci series: ");
	int b = input ();
	
	if (check2 (b) == 1)
		printf ("Fibonacci series is: %d\n", fibonacci (b));
	
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

int check1 (int n)
{
	if (n < 0)
	{
		printf ("Invalid input!\n");
		return 0;
	}
	
	return 1;
}

int check2 (int n)
{
	if (n < 1)
	{
		printf ("Invalid input!\n");
		return 0;
	}
	
	return 1;
}