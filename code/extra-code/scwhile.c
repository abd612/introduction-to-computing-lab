#include <stdio.h>

int main (void)
{
	int grade, total = 0, counter = 0;
	float average;
	
	printf ("Enter grade, -1 to end: ");
	scanf ("%d", &grade);
	
	while (grade != -1)
	{
		total = total + grade;
		counter = counter + 1;
		
		printf ("Enter grade, -1 to end: ");
		scanf ("%d", &grade);
	}
	
	if (counter != 0)
	{
		average = 1.00 * total / counter;
		printf ("Class average is %.2f\n", average);
	}
	
	else
	{
		printf ("No grades were entered.\n");
	}
	
	return 0;
}