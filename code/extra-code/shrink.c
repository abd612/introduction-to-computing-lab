#include <stdio.h>

int main (void)

{
	int a, b, c, d, e, f, g, h, i, j;
	
	printf ("Enter a ten digit number and watch it shrink!\n");
	scanf ("%d", &a);
	
	b = a / 10;
	printf ("%i\n", b);	
	
	c = b / 10;
	printf ("%i\n", c);
	
	d = c / 10;
	printf ("%i\n", d);
	
	e = d / 10;
	printf ("%i\n", e);
	
	f = e / 10;
	printf ("%i\n", f);
	
	g = f / 10;
	printf ("%i\n", g);
	
	h = g / 10;
	printf ("%i\n", h);
	
	i = h / 10;
	printf ("%i\n", i);
	
	j = i / 10;
	printf ("%i\n", j);
	
	return 0;
}