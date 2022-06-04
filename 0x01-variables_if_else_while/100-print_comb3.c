#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print combinations of two-digit numbers ascending order
 *
 * Return: zero
 */

int main(void)
{
	/**
	 * d1: is digit 1
	 * d2: is digit 2
	 */
	int d1, d2;

	for (d1 = 0; d1 < 10; d1++)
	{
		for (d2 = d1 + 1; d2 < 10; d2++)
		{
			putchar((d1 % 10) + '0');
			putchar((d2 % 10) + '0');

			if (d1 == 8 && d2 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
