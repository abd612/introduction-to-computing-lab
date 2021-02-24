#include<stdio.h>

struct time
{
	int hours, minutes, seconds;
};

struct time elapsed_time(struct time time1, struct time time2);

int main(void)
{
	struct time time1, time2, time3;
	
	printf("Enter first time (HH:MM:SS): ");
	scanf("%d:%d:%d", &time1.hours, &time1.minutes, &time1.seconds);
	
	printf("Enter second time (HH:MM:SS): ");
	scanf("%d:%d:%d", &time2.hours, &time2.minutes, &time2.seconds);
	
	time3 = elapsed_time(time1, time2);
	
	printf("The elapsed time is %d hours, %d minutes, %d seconds.\n", time3.hours, time3.minutes, time3.seconds);
	
	return 0;
}

struct time elapsed_time(struct time time1, struct time time2)
{
	int t1 = time1.hours * 3600 + time1.minutes * 60 + time1.seconds;
	int t2 = time2.hours * 3600 + time2.minutes * 60 + time2.seconds;
	
	if(t2 < t1)
	{
		t2 += 24 * 3600;
	}
	
	int t3 = t2 - t1;
	
	struct time time3;
	
	time3.hours = t3 / 3600;
	time3.minutes = t3 % 3600 / 60;
	time3.seconds = t3 % 3600 % 60;
	
	return time3;
}
