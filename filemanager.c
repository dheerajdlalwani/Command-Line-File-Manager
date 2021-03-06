#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char *getCurrentTime()
{
	// TODO
	char *timeNow = "Current Time";
	// time_t timeNow = time(NULL);

	return timeNow;
}

char *getCurrentDate()
{
	// TODO
	char *date = "Current Date";
	return date;
}

int main()
{
	// int hours, minutes, seconds, day, month, year;
	// time_t now;
	// FILE *filePointer;
	// filePointer = fopen("life.txt", "a");
	// time(&now);
	printf("System's current time: %s\n", getCurrentTime());
	printf("System's current date: %s\n", getCurrentDate());

	return 0;
}
