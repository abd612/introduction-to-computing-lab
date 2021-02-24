#include <stdio.h>

int main()
{
	int integerVar = 100;
	printf ("integerVar = %i\n", integerVar);
	
	float floatingVar = 331.79;
	printf ("floatingVar = %f\n", floatingVar);
	
	double doubleVar = 8.44e+11;
	printf ("doubleVar = %e\n", doubleVar);
	printf ("doubleVar = %g\n", doubleVar);
	
	char charVar = 'W';
	printf ("charVar = %c\n", charVar);
	
	return 0;
}