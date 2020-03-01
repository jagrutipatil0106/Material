/*
Problem: 	Need to ake user to enter a day of the week, example "Monday", "Tuesday", "Wednesday" etc. 
			and print if that day is either a "Weekday" or a "Weekend".
*/

#include<stdio.h>

#include <string.h>
// strcmp funtion is defined in the string.h file.

using namespace std;

int main()
{

	char day[20];
	// To store the character sequence/string.

	printf("%s", "Enter the Day: ");
	scanf("%s", &day);

	if(	(strcmp(day, "Monday") ==0) || (strcmp(day, "Tuesday") ==0) || (strcmp(day, "Wednesday") ==0) || 
		(strcmp(day, "Thursday") ==0) || (strcmp(day, "Friday") ==0)) 
		// strcmp is a function which compares two string, and return 0 if both strings are equal else return 1 if strings do not match.
	{
		printf("%s is a weekday\n", day);
	}
	else if ( (strcmp(day, "Saturday") ==0) || (strcmp(day, "Sunday") ==0))
	{
		printf("%s is a Weekend\n", day);
	}
	else{
		printf("%s\n", "Invalid input");
	}

return 0;
}
	