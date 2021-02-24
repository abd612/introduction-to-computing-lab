#include <stdio.h>
#include <math.h>

int main (void)
{
	int a, b, c;
	float x, y, z, r1, r2;
	printf ("Enter a quadratic equation:\n");
	scanf ("%dx^2 + %dx + %d", &a, &b, &c);
	printf ("%dx^2 + %dx + %d\n", a, b, c);
	x = b * b - 4 * a * c;
	y = sqrt (x);
	r1 = (- b + y) / (2 * a);
	r2 = (- b - y) / (2 * a);
	printf ("Roots are %f and %f\n", r1, r2);
	return 0;
}