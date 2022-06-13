#include "main.h"
#include <stdio.h>

/**
 * puts2 - function that prints
 * every other character of a string, starting
 * with the first character, followed
 * by a new line.
 *
 * @str: string input
 * Return: Nothing
 */
void puts2(char *str)
{
	int len = 0, i = 0;

	while (str[len] != '\0')
		len++;
	len -= 1;

	for ( ; i <= len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
