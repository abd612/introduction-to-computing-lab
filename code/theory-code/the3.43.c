#include <stdio.h>

int main (void)
{
	int side1, side2, side3;
	
	printf ("Enter the three sides: ");
	scanf ("%d %d %d", &side1, &side2, &side3);
	
	if ((side1 + side2) > side3 && (side2 + side3) > side1 && (side3 + side1) > side2)
	{
		printf ("A triangle can be formed.\n");
	}
	
	else
	{
		printf ("A triangle cannot be formed.\n");
	}
	
	return 0;
}