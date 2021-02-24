#include <stdio.h>

int main (void)
{
	int entry;
	printf ("Welcome to the event!\n");
		
	while (entry != 'X' && entry != 'x')
	{
		printf ("\nPlease enter the first letter of the name of the color of your ID card.\n");
		printf ("(Enter X to end the program.)\n");
		entry = getchar ();
		getchar ();
		
		switch (entry)
		{
			case 'G':
			case 'g':
				printf ("You're a Scientist.\n");
				printf ("Please proceed to the front rows of the right side of the auditorium.\n");
				break;
		
			case 'B':
			case 'b':
				printf ("You're an Engineer.\n");
				printf ("Please proceed to the front rows of the left side of the auditorium.\n");
				break;
		
			case 'R':
			case 'r':
				printf ("You're a Student.\n");
				printf ("Please proceed to the back rows of the left side of the auditorium.\n");
				break;
		
			case 'Y':
			case 'y':
				printf ("You're from the general public.\n");
				printf ("Please proceed to the back rows of the right side of the auditorium.\n");
				break;
				
			case 'X':
			case 'x':
				printf ("Thank you for coming.\n");
				printf ("Good bye!\n");
				break;
		
			case '\n':
			case '\t':
			case ' ':
				break;
		
			default:
				printf ("Invalid entry!\n");
				break;
		}
	}
	
	return 0;
}