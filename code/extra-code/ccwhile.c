#include <stdio.h>

int main (void)
{
	int grade, total = 0, counter = 1;
	
	while (counter <= 10)
	{
		printf ("Enter grade: ");
		scanf ("%d", &grade);
		
		total = total + grade;
		counter = counter + 1;
	}
	
	printf ("Class average is %d\n", total / 10);
	
	return 0;
}