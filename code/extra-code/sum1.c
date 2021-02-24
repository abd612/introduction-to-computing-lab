#include<stdio.h>

int main ()

{
	int a;
	int b;
	int s;
	
	printf ("Enter first integer\n");
	scanf ("%i", &a);
	
	printf ("Enter second integer\n");
	scanf ("%i", &b);
	
	s = a + b;
	printf ("The sum is %i\n", s);
	
	return 0;
}
