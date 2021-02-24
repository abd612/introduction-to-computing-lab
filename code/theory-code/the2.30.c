#include <stdio.h>

int main (void)

{
	int a, b, c, d, e, f, g, h, i;
	
	printf ("Enter a five digit number:\n");
	scanf ("%d", &a);
	
	b = a % 10;
	c = a / 10;
	
	d = c % 10;
	e = c / 10;
	
	f = e % 10;
	g = e / 10;
	
	h = g % 10;
	i = g / 10;
	
	printf ("%d %d %d %d %d\n", i, h, f, d, b);
	
	return 0;
}