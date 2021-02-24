#include <stdio.h>

int main (void)
{
	float gallons, miles, totalgallons, totalmiles;
	
	while (gallons != -1)
	{
		printf ("Enter the gallons used (-1 to end): ");
		scanf ("%f", &gallons);
		
		if (gallons == -1)
		{
			continue;
		}
		
		printf ("Enter the miles driven: ");
		scanf ("%f", &miles);
		
		printf ("The miles/gallon for this tank was %f\n\n", miles / gallons);
		totalgallons += gallons;
		totalmiles += miles;
	}
	
	printf ("\nThe overall average miles/gallon was %f\n", totalmiles / totalgallons);
	
	return 0;
}