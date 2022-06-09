#include <stdio.h>
#include "main.h"
/**
 * main - print leap years
 *
 * Return: zero
 */

int main(void)
{
	int month;
	int day;
	int year;

	month = 29;
	day = 02;
	year = 2000;

	printf("Date: %02d/%02d/%04d\n", month, day, year);

	day = convert_day(month, day);

	print_remaining_days(month, day, year);

	return (0);
}
