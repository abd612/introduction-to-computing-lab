#include <stdio.h>

int main (void)
{
	float radius, diameter, circumference, area;
	
	printf ("Enter the radius of the circle: ");
	scanf ("%f", &radius);
	
	printf ("Diameter: %f\n", 2 * radius);
	printf ("Circumference: %f\n", 2 * 3.14159 * radius);
	printf ("Area: %f\n", 3.14159 * radius * radius);
	
	return 0;
}