#include "main.h"
/**
 * largest_number - print the largest from three numbers
 * @a: number 1
 * @b: number 2
 * @c: number 3
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int l;

	if (a >= b && a >= c)
	{
		l = a;
	}
	else if (b >= a && b >= c)
	{
		l = b;
	}
	else if (c >= a && c >= b)
	{
		l = c;
	}
	return (l);
}
