#include <stdio.h>

int main (void)

{
	int n;
	char x;
	
	printf ("\nQUIZ!!!\n\nDo you want to continue?\n");
	printf ("Enter 1 for yes or 0 for no:\n");
	scanf ("%i", &n);
	
	if (n==0)
	{
		printf ("\nOkay, bye!\n");
	}
	
	if (n==1)
	{
		printf ("\nWhen did Pakistan come into being?\na. 1857\nb. 1905\nc. 1947\nd. 1973\n\nEnter the correct option:\n");
		scanf (" %c", &x);
		
		if (x=='c')
		{
			printf ("\nCongratulations! :)\nYour answer is correct!\n");
		}
		
		if (x=='a' || x=='b' || x=='d')
		{
			printf ("\nSorry! :(\nYour answer is wrong!\nCorrect answer is c. 1947\n");
		}
		
		if (x!='a' && x!='b' && x!='c' && x!='d')
		{
			printf ("\nInvalid entry!\n");
		}
	}
	
	if (n!=0 && n!=1)
	{
		printf("\nInvalid entry!\n");
	}
	
	return 0;
}
