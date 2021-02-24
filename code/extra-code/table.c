#include <stdio.h>

int main (void)
{
	int n, c = 1;
	printf ("Enter a number for which a multiplication table will be printed: ");
	scanf ("%d", &n);
	printf("\nTable of %d!\n\n", n);
	
	while (c <= 10)
	{
		printf ("%d x %d = %d\n", n, c, n * c);
		c++;
	}
	
	return 0;
}