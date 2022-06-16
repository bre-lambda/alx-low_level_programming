#include "main.h"

#define ROT13IN  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
#define ROT13OUT "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"

/**
 * print_number - prints the integer
 * @n:  the integer to be printed
 * Description:takes inputs and prints an integer
 * Return: Nothing
 */
void print_number(int n)
{
	int i, p;

	if (n < 0)
		_putchar('-');
	for (p = 0, i = 1000000000; i > 0; i /= 10)
	{
		int d = (n / i) % 10;

		d = d < 0 ? -d : d;

		if (d || p || i == 1)
		{
			_putchar(d + '0');
			p++;
		}
	}
}
