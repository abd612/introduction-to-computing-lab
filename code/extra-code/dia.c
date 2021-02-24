#include <stdio.h>

int main (void)
{
	int mat[4][4]={{7,8,9,4},{6,5,4,5},{7,2,7,6},{1,3,6,5}};
	int i, j;
	
	for (j=0; j<4; j++)
	{
		printf ("%d  ", mat[0][j]);
	}
	puts ("");
	for (i=0; i<4; i++)
	{
		printf ("%d  ", mat[i][3]);
	}
	puts ("");
	for (i=0; i<4; i++)
	{
		for (j=0; j<4; j++)
		{
			if (i==j)
			{
				printf ("%d  ", mat[i][j]);
			}
		}
	}
}