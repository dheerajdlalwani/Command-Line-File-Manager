#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char * getCurrentTime()
{
	// TODO
	char *time = "Current Time";
	return time;
}

char * getCurrentDate()
{
	// TODO
	char *date = "Current Date";
	return date;
}

char * getCurrentDateAndTime()
{
	char * time = getCurrentTime();
	char * date = getCurrentDate();
	char * dateTime = malloc(sizeof(char) * (strlen(time) + strlen(date) + 3));
	dateTime[0] = 0;
	strcat(dateTime, date);
	strcat(dateTime, " | ");
	strcat(dateTime, time);
	return dateTime;
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
	printf("System's current date and time is: %s\n", getCurrentDateAndTime());

	// ssprintf
	// snprintf
	return 0;
}
