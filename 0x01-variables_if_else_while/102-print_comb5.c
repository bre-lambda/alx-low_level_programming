#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print combinations of two two-digit numbers from 0-99
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

	for (d1 = 0; d1 <= 98; d1++)
	{
		for (d2 = d1 + 1; d2 <= 99; d2++)
		{
			putchar((d1 / 10) + '0');
			putchar((d1 % 10) + '0');
			putchar(' ');
			putchar((d2 / 10) + '0');
			putchar((d2 % 10) + '0');

			if (d1 == 98 && d2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
