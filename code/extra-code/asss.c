//Made by: Muhammad Abdullah, 2015-EE-166

#include <stdio.h>

int input (void);
int check1 (int n);
int check2 (int n);
int fibonacci (int n);
int factorial (int n);

int main (void)
{
	printf ("Enter a number for Factorial: ");
	printf ("Factorial of the number is: %d\n", factorial (check1 (input())));
	
	printf ("Enter a number for Fibonacci series: ");
	printf ("The nth term of Fibonacci series is: %d\n", fibonacci (check2 (input())));
	
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
	while (n < 0)
	{
		printf ("Invalid input! Enter again: ");
		n = input ();
	}
	
	return n;
}

int check2 (int n)
{
	while (n < 1)
	{
		printf ("Invalid input! Enter again: ");
		n = input ();
	}
	
	return n;
}

//Made by: Muhammad Abdullah, 2015-EE-166