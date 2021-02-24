//Made by: Muhammad Abdullah, 2015-EE-166

#include <stdio.h>

struct fraction
{
	int num;
	int den;
};

int main (void)
{
	struct fraction frac1, frac2, frac3;
	int oper;
	char sign;
	
	printf ("Enter first fraction (numerator/denominator): ");
	scanf ("%d/%d", &frac1.num, &frac1.den);
	
	printf ("Enter second fraction (numerator/denominator): ");
	scanf ("%d/%d", &frac2.num, &frac2.den);
	
	printf ("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
	printf ("Enter the corresponding number for the operation: ");
	scanf ("%d", &oper);
	
	switch (oper)
	{
		case 1:
			frac3.den = frac1.den * frac2.den;
			frac3.num = frac1.num * (frac3.den / frac1.den) + frac2.num * (frac3.den / frac2.den);
			sign = '+';
			break;
			
		case 2:
			frac3.den = frac1.den * frac2.den;
			frac3.num = frac1.num * (frac3.den / frac1.den) - frac2.num * (frac3.den / frac2.den);
			sign = '-';
			break;
			
		case 3:
			frac3.den = frac1.den * frac2.den;
			frac3.num = frac1.num * frac2.num;
			sign = '*';
			break;
			
		case 4:
			frac3.den = frac1.den * frac2.num;
			frac3.num = frac1.num * frac2.den;
			sign = '/';
			break;
	}
	
	printf ("\n%d/%d %c %d/%d = %d/%d\n", frac1.num, frac1.den, sign, frac2.num, frac2.den, frac3.num, frac3.den);
	
	return 0;
}