#include "main.h"
/**
 * _isdigit - function that
 * checks for a digit (0 through 9).
 * @c: input
 * Return: 1 if c is a digit or 0
 */
int _isdigit(int c)
{
	char i = '0';
	int d = 0;

	for (; i <= '9'; i++)
	{
		if (i == c)
		{
			d = 1;
			break;
		}
	}
	return (d);
}
