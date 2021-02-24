#include <stdio.h>

int main ()

{
	float r, d, c, a, p = 3.14159;
	
	printf ("Radius: ");
	scanf ("%f", &r);
	
	printf ("Diameter: %f\n", 2 * r);
	printf ("Circumference: %f\n", 2 * p * r);
	printf ("Area: %f\n", p * r * r);
	
	return 0;
}