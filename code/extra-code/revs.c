#include <stdio.h>

int main (void)
{
	char string[20];
	
	printf ("Enter a string: ");
	scanf ("%s", string);
	
	int i;
	
	for (i = 20; i >= 0; i--)
	{
		printf ("%c", string[i]);
	}
	
	return 0;
}