#include <stdio.h>

int main (void)
{
	int m;
	printf ("Grade Generator!\n\n");
	printf ("Grading Policy:\n90-100: A+\n80-89: A\n75-79: A-\n70-74: B+\n65-69: B\n60-64: B-\n55-59: C+\n50-54: C\n45-49: C-\n40-44: D\n0-39: F\n\n");
	printf ("Enter your marks: ");
	scanf ("%d", &m);
	
	if (m > 100)
	{
		printf ("Invalid marks!\n");
	}
	
	else
	{
		if (m >= 90)
		{
			printf ("Your grade: A+\n:D\n");
		}
		
		else
		{
			if (m >= 80)
			{
				printf ("Your grade: A\n:D\n");
			}
			
			else
			{
				if (m >= 75)
				{
					printf ("Your grade: A-\n:)\n");
				}
				
				else
				{
					if (m >= 70)
					{
						printf ("Your grade: B+\n:)\n");
					}
					
					else
					{
						if (m >= 65)
						{
							printf ("Your grade: B\n:|\n");
						}
						
						else
						{
							if (m >= 60)
							{
								printf ("Your grade: B-\n:|\n");
							}
							
							else
							{
								if (m >= 55)
								{
									printf ("Your grade: C+\n:/\n");
								}
								
								else
								{
									if (m >= 50)
									{
										printf ("Your grade: C\n:/\n");
									}
									
									else
									{
										if (m >= 45)
										{
											printf ("Your grade: C-\n:(\n");
										}
										
										else
										{
											if (m >= 40)
											{
												printf ("Your grade: D\n:(\n");
											}
											
											else
											{
												printf ("Your grade: F\n:'(\n");
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	
	return 0;
}