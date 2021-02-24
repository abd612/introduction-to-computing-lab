#include <stdio.h>

void copy (char s1[], char s2[]);

int main (void)
{
	char string1[20], string2[20] = "Hello, how are you?";
	
	copy (string1, string2);
	
	printf ("String1: %s", string1);
	
	return 0;
}

void copy (char s1[], char s2[])
{
	int i;
	
	for (i = 0; (s1[i] = s2[i]) != '\0'; i++)
	{
		;
	}
}