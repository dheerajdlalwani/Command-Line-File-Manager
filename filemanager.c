#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char *getCurrentTime()
{
	time_t rawtime = time(NULL); // Get raw UNIX time (Number of seconds from the Unix Epoch)
	struct tm *ptm = localtime(&rawtime);

	// localtime will convert the raw time (in seconds) and fill a struct of tm type
	// and, then we can use the arrow operator to access
	// hour: ptm -> tm_hour
	// min: ptm -> tm_min
	// sec: ptm -> tm_sec

	int hour = ptm->tm_hour;
	int min = ptm->tm_min;
	int sec = ptm->tm_sec;
	char *currentTime = malloc(sizeof(char) * 8);
	currentTime[0] = 0;
	if (rawtime == -1)
	{
		return "The time() function failed";
	}
	sprintf(currentTime, "%02d:%02d:%02d", hour, min, sec);
	// sprintf is just like printf
	// just that it prints the output to a string
	// just like formatted strings in python
	return currentTime;
}

char *getCurrentDate()
{
	// TODO
	char *date = "Current Date";
	return date;
}

// char *getCurrentDateAndTime()
// {
// 	char *time = getCurrentTime();
// 	char *date = getCurrentDate();
// 	char *dateTime = malloc(sizeof(char) * (strlen(time) + strlen(date) + 3));
// 	dateTime[0] = 0;
// 	strcat(dateTime, date);
// 	strcat(dateTime, " | ");
// 	strcat(dateTime, time);
// 	return dateTime;
// }

int main()
{
	// int hours, minutes, seconds, day, month, year;
	// time_t now;
	// FILE *filePointer;
	// filePointer = fopen("life.txt", "a");
	// time(&now);

	printf("System's current time: %s\n", getCurrentTime());
	printf("System's current date: %s\n", getCurrentDate());
	// printf("System's current date and time is: %s\n", getCurrentDateAndTime());

	// snprintf
	return 0;
}
