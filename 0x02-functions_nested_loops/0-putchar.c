#include <stdio.h>
#include "main.h"

/**
 * main - program that prints _putchar, followed by a new line.
 *
 * Return: putchar
 */
int main(void)
{
	char word[8] = "_putchar";
	int i = 0;

	while (i <= 7)
	{
		_putchar(word[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
