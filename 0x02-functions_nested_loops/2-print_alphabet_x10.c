#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet,
 * in lowercase, followed by a new line
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		print_alphabet();

	}
}

/**
 * print_alphabet - prints lower case alphabet
 *
 **/
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);

	}
	_putchar('\n');
}
