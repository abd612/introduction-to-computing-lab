#include <stdio.h>

int main (void)
{
	int result, passes = 0, fails = 0, students = 0;
	
	while (students < 10)
	{
		printf ("Enter result (1=pass, 2=fail): ");
		scanf ("%d", &result);
		
		if (result == 1)
		{
			passes = passes + 1;
		}
		
		else
		{
			fails = fails + 1;
		}
		
		students = students + 1;
	}
	
	printf ("Passed %d\n", passes);
	printf ("Failed %d\n", fails);
	
	if (passes > 8)
	{
		printf ("Bonus to instructor!\n");
	}
	
	return 0;
}