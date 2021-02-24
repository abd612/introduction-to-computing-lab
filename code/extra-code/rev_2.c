#include <stdio.h>

void reverse (char string[]);

int main (void)
{
	char string[30];
	printf ("Enter a string: ");
	scanf ("%s", string);
	
	printf ("Your string: ");
	int i;
	
	for (i = 0; string [i] != '\0'; i++)
	{
		printf ("%c", string[i]);
	}
	
	puts("");
	
	printf ("Reverse string: ");
	reverse (string);
	
	return 0;
}

void reverse (char string[])
{
	if (string[0] == '\0')
		return;
	
	reverse (&string[1]);
	printf ("%c", string[0]);
}