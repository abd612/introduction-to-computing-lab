#include <stdio.h>

int main (void)
{
	int x, y, z, s, p;
	float a;
	
	printf ("Enter three different integers: ");
	scanf ("%d %d %d", &x, &y, &z);
	
	s = x + y + z;
	printf ("Sum is %i\n", s);
	
	a = s / 3.0;
	printf ("Average is %f\n", a);
	
	p = x * y * z;
	printf ("Product is %i\n", p);
	
	if (x<y && x<z)
	{
		printf ("Smallest is %i\n", x);
	}
	if (y<x && y<z)
	{
		printf ("Smallest is %i\n", y);
	}
	if (z<x && z<y)
	{
		printf ("Smallest is %i\n", z);
	}
	
	if (x>y && x>z)
	{
		printf ("Largest is %i\n", x);
	}
	if (y>x && y>z)
	{
		printf ("Largest is %i\n", y);
	}
	if (z>x && z>y)
	{
		printf ("Largest is %i\n", z);
	}
	
	return 0;
}
