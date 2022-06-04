#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print combinations of single-digit numbers
 *
 * Return: zero
 */

int main(void)
{
	/**
	 * n: is number
	 */
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar((n % 10) + '0');
		if (n == 9)
			continue;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
