#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - insial point
 *
 * Return: zero
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	for (low = 'A'; low <= 'Z'; low++)
		putchar('\n');
	putchar('\n');
	return (0);
}
