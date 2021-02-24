//Made by: Muhammad Abdullah, 2015-EE-166

#include <stdio.h>

int main (void)
{
	struct date
	{
		int day, month, year;
	};
	
	struct student
	{
		char firstname[20];
		char lastname[20];
		struct date dob;
		char gender;
	};
	
	struct student list[5];
	
	printf ("INPUT!\n\n");
	
	int i;
	
	for (i = 0; i < 5; i++)
	{
		printf ("Record for *Student %d*\n", i+1);
		
		printf ("Enter first name: ");
		scanf ("%s", list[i].firstname);
		
		printf ("Enter last name: ");
		scanf ("%s", list[i].lastname);
		
		printf ("Enter date of birth (DD/MM/YYYY): ");
		scanf ("%d %d %d", &list[i].dob.day, &list[i].dob.month, &list[i].dob.year);
		
		printf ("Enter gender (M/F): ");
		scanf (" %c", &list[i].gender);
		
		puts ("");
	}
	
	printf ("OUTPUT!\n\n");
	
	int j;
	
	for (j = 0; j < 5; j++)
	{
		printf ("Record for *Student %d*\n", j+1);
		
		printf ("First name: %s\n", list[j].firstname);
		
		printf ("Last name: %s\n", list[j].lastname);
		
		printf ("Date of birth (DD/MM/YYYY): %d/%d/%d\n", list[j].dob.day, list[j].dob.month, list[j].dob.year);
		
		printf ("Gender (M/F): %c\n", list[j].gender);
		
		puts ("");
	}
	
	return 0;
}

//Made by: Muhammad Abdullah, 2015-EE-166