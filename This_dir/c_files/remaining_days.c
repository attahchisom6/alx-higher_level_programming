#include "convert_day.h"

/**
 * remaining_days-function to determine how many days are remaining in a year
 * after a day is inputed
 * @month:date in month format
 * @day:number of days
 * @year-year parameter
 */

void remaining_days(int month, int day, int year)
{
	if ((year % 4 == 0) && (year % 400 == 0 || year % 100 != 0))
	{
		if (month >= 3 && day >= 60)
		{
			day++;
		}
		printf("Day of the year is: %d\n", day);
		printf("Remaining days are: %d", 366 - day);
	}

		else if (month == 2 && day == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		}
	else
	{
		printf("Day of the year is: %d\n", day);
		printf("Remaining day is: %d\n", 365 - day);
	}
}


int main(void)
{
	int month, day, year;

	puts("Enter month of the year: ");
	scanf("%d", &month);

	puts("Enter day of year: ");
	scanf("%d", &day);

	puts("Enter value of year: ");
	scanf("%d", &year);

	printf("Date: %02d/%02d/%04d\n", month, day, year);

	day = convert_day(month, day);
	remaining_days(month, day, year);
	printf("\n");
	return (0);
}
