#include <stdio.h>

int main (void)
{
	int var;
	int var1;
	int var2;
	
	printf ("Enter var1: ");
	scanf ("%d", &var1);
	
	printf ("Enter var2: ");
	scanf ("%d", &var2);
	
	var = var1;
	var1 = var2;
	var2 = var;
	
	printf ("var1: %i\n", var1);
	printf ("var2: %i\n", var2);
	
	return 0;
}