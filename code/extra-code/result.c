//Made by: Muhammad Abdullah, 2015-EE-166

#include <stdio.h>

struct exam
{
	int roll;
	int quiz1;
	int mid;
	int quiz2;
	int total;
};

float average (struct exam rslt[15]);
int greater (struct exam rslt[15], float avg);

int main (void)
{
	struct exam result[15] = { {110,7,22,6}, {111,6,19,2}, {112,7,15,7}, {113,4,26,8}, {114,3,29,7},
							   {115,6,22,6}, {116,7,18,5}, {117,8,12,9}, {118,10,16,5}, {119,2,23,4},
							   {120,5,28,8}, {121,8,30,9}, {122,6,29,7}, {123,9,27,10}, {124,5,11,3} };
	
	int c;
	
	for (c = 0; c < 15; c++)
	{
		result[c].total = result[c].quiz1 + result[c].mid + result[c].quiz2;
	}
	
	printf ("Roll No  Quiz-1  Mid Term  Quiz-2  Total\n");
	
	for (c = 0; c < 15; c++)
	{
		printf ("%7d  %6d  %8d  %6d  %5d\n", result[c].roll, result[c].quiz1, result[c].mid, result[c].quiz2, result[c].total);
	}
	
	float classaverage = average(result);
	
	int students = greater(result, classaverage);
	
	printf ("\nClass average: %.2f\n", classaverage);
	printf ("Number of students above average: %d\n", students);
	
	return 0;
}

float average (struct exam rslt[15])
{
	int c, ctotal = 0;
	
	for (c = 0; c < 15; c++)
	{
		ctotal += rslt[c].total;
	}
	
	float avg;
	
	avg = (float) ctotal / 15;
	
	return avg;
}

int greater (struct exam rslt[15], float avg)
{
	int c, n = 0;
	
	for (c = 0; c < 15; c++)
	{
		if (rslt[c].total > avg)
			n++;
	}
	
	return n;
}