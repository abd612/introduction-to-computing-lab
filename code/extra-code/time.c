#include <stdio.h>

int main (void)
{
	struct time
	{
		int hour;
		int minute;
		int second;
	};
	
	struct time now, later;
	
	printf ("Enter current time (HH MM SS): ");
	scanf ("%d %d %d", &now.hour, &now.minute, &now.second);
	
	if (now.hour == 23 && now.minute == 59)
	{
		later.second = now.second;
		later.minute = 0;
		later.hour = 0;
	}
	
	else if (now.minute == 59)
	{
		later.second = now.second;
		later.minute = 0;
		later.hour = now.hour + 1;
	}
	
	else
	{
		later.second = now.second;
		later.minute = now.minute + 1;
		later.hour = now.hour;
	}
	
	

	
	printf ("Time after one minute (HH MM SS): %d:%d:%d\n", later.hour, later.minute, later.second);
	
	return 0;
}