#include <stdio.h>

struct resistor equivalentR (struct resistor r1, struct resistor r2);

struct resistor
	{
		int resistance;
		double rating;
	};
	
int main (void)
{
	struct resistor r1, r2, r3;
	
	r1.resistance = 10;
	r1.rating = 2.5;
	r2.resistance = 5;
	r2.rating = 2.7;
	
	r3 = equivalentR (r1, r2);
	
	printf ("r3.resistance: %d\nr3.rating: %f\n", r3.resistance, r3.rating);
	
	return 0;
}

struct resistor equivalentR (struct resistor r1, struct resistor r2)
{
	struct resistor r3;
	r3.resistance = r1.resistance + r2.resistance;
	r3.rating = (r1.rating + r2.rating) / 2;
	return r3;
}