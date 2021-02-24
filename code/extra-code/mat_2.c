#include <stdio.h>

int main (void)
{
	int A[2][3] = {1,2,3,4,5,6};
	int B[3][2] = {6,5,4,3,2,1};
	int C[2][2] = {0};
	int i, j, k;
	
	printf ("A\n");
	
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf ("%d  ", A[i][j]);
		}
		puts ("");
	}
	
	printf ("B\n");
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf ("%d  ", B[i][j]);
		}
		puts ("");
	}
	
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			for (k = 0; k < 3; k++)
			{
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	
	printf ("C = A * B\n");
	
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf ("%d  ", C[i][j]);
		}
		puts ("");
	}
	
	return 0;
}