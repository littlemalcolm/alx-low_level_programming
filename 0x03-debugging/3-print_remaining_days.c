#include <stdio.h>
#include "main.h"

/**
  * print_remaining_days - takes a date and prints how many days are left
  * in the year, taking leap years into account.
  * @month: month in number format
  * @day: day of the month
  * @year: year
  * Return: void
  */

void print_remaining_days(int month, int day, int year)
{
	if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
	{
		if (month != 2)
		{
			day++;
		}
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 365 - day);
	}
}
/**
  * Bug - Invalid dates.
  * Takes care of passing day 29 to Feb in a non leap year,
  * However, doesn't detect when other days of the month,
  * For any month in fact, are invalid.
  */

