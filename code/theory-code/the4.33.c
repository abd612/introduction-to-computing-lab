#include <stdio.h>

int main (void)
{
	int number, ten, digit;
	
	printf ("Decimal\tRoman\n");
	
	for (number = 1; number <= 100; number++)
	{
		printf ("%d\t", number);
		
		ten = number / 10;
		digit = number % 10;
		
		switch (ten)
		{
			case 0:
				break;
			
			case 1:
				printf ("X");
				break;
				
			case 2:
				printf ("XX");
				break;
			
			case 3:
				printf ("XXX");
				break;
			
			case 4:
				printf ("XL");
				break;
			
			case 5:
				printf ("L");
				break;
			
			case 6:
				printf ("LX");
				break;
			
			case 7:
				printf ("LXX");
				break;
			
			case 8:
				printf ("LXXX");
				break;
			
			case 9:
				printf ("XC");
				break;
			
			case 10:
				printf ("C");
				break;
				
			default:
				break;
		}
		
		switch (digit)
		{
			case 0:
				printf ("\n");
				break;
				
			case 1:
				printf ("I\n");
				break;
				
			case 2:
				printf ("II\n");
				break;
				
			case 3:
				printf ("III\n");
				break;
				
			case 4:
				printf ("IV\n");
				break;
				
			case 5:
				printf ("V\n");
				break;
				
			case 6:
				printf ("VI\n");
				break;
				
			case 7:
				printf ("VII\n");
				break;
				
			case 8:
				printf ("VIII\n");
				break;
				
			case 9:
				printf ("IX\n");
				break;
				
			default:
				break;
		}
	}
	
	return 0;
}