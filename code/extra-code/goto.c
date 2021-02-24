#include <stdio.h>

int main (void)
{
	int n;
	n = 0;
	r: printf ("%d\n", n);
	n = n + 1;
	goto r;
	return 0;
}