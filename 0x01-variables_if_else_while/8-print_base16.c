#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print base 16 in lowercase
 *
 * Return: zero
 */

int main(void)
{
	/**
	 * n: is number
	 * l: is letter
	 */
	int n;
	char l;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	for (l = 'a'; l <= 'f'; l++)
		putchar(l);

	putchar('\n');

	return (0);
}
