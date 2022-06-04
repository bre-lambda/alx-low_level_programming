#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print zero to ten using putchar
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
		putchar((n % 10) + '0');

	putchar('\n');

	return (0);
}
