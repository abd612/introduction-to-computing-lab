#include<stdio.h>

void sort3(int x, int y, int z, int *first, int *second, int *third);

int main(void)
{
	int x, y, z;
	printf("Enter three numbers: ");
	scanf("%d %d %d", &x, &y, &z);
	
	int first, second, third;
	
	sort3(x, y, z, &first, &second, &third);
	
	printf("The numbers in ascending order are: %d, %d, %d", first, second, third);
	
	return 0;
}

void sort3(int x, int y, int z, int *first, int *second, int *third)
{
	
	if(x < y)
	{
		if(y < z)
		{
			*first = x;
			*second = y;
			*third = z;
		}
		
		else
		{
			if(x < z)
			{
				*first = x;
				*second = z;
				*third = y;
			}
			
			else
			{
				*first = z;
				*second = x;
				*third = y;
			}
		}
	}
	
	else
	{
		if(x < z)
		{
			*first = y;
			*second = x;
			*third = z;
		}
		
		else
		{
			if(y < z)
			{
				*first = y;
				*second = z;
				*third = x;
			}
			
			else
			{
				*first = z;
				*second = y;
				*third = x;
			}
		}
	}
	
	return;
}
