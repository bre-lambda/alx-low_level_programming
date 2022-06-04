#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print a to z revers order
 *
 * Return: zero
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
