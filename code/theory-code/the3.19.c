#include <stdio.h>

int main (void)
{
	int days;
	float principal, rate, interest;
	
	while (principal != -1)
	{
		printf ("Enter loan principal (-1 to end): ");
		scanf ("%f", &principal);
		
		if (principal != -1)
		{
			printf ("Enter intesest rate: ");
			scanf ("%f", &rate);
			
			printf ("Enter term of loan in term of days: ");
			scanf ("%d", &days);
			
			interest = principal * rate * days / 365;
			printf ("The interest charge is $%.2f\n\n", interest);
		}
	}
	
	return 0;
}