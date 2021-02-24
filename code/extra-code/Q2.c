#include<stdio.h>

int lcm(int u, int v);
int gcd(int x, int y);

int main(void)
{
	int a, b;
	printf ("Enter two numbers: ");
	scanf ("%d %d", &a, &b);
	
	printf ("The LCM of the two numbers is: %d", lcm(a, b));
	
	return 0;
}

int lcm(int u, int v)
{
	return u * v / gcd(u, v);
}

int gcd(int x, int y)
{
	int remainder = x % y;

	if (remainder == 0)
	{
	return y;
    }

    return gcd(y, remainder);
}
