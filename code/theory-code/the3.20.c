#include <stdio.h>

int main (void)
{
	int hours;
	float rate, salary;
	
	while (hours != -1)
	{
		printf ("Enter # of hours worked (-1 to end): ");
		scanf ("%d", &hours);
		
		if (hours != -1)
		{
			printf ("Enter hourly rate of the worker ($00.00): ");
			scanf ("%f", & rate);
			
			if (hours <= 40)
			{
				salary = hours * rate;
				printf ("Salary is $%.2f\n", salary);
			}
			
			else
			{
				salary = (40 + (hours - 40) * 1.5) * rate;
				printf ("Salary is $%.2f\n", salary);
			}
			
			puts ("");
		}
	}
	
	return 0;
}