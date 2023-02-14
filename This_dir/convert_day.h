#include <stdio.h>

/**
 * convert_day - This function will convert the day of the month into days of th years
 * without putting the leap year into account
 * @month:date in month format
 * @day:number of days
 */

int convert_day (int month, int day)
{

	
		switch(month)
		{
		case 2:
			day = day + 31;
			break;

		case 3:
			day = day + 59;
			break;

		case 4:
			day = day + 90;
			break;

		case 5:
			day = day + 120;
			break;

		case 6:
			day = day + 151;
			break;

		case 7:
			day = day + 181;
			break;

		case 8:
			day = day + 212;
			break;

		case 9:
			day = day + 243;
			break;

		case 10:
			day = day + 273;
			break;

		case 11:
			day = day + 304;
			break;

		case 12:
			day = day + 334;
			break;

		default:
			break;
		
	}

	return (day);
}
