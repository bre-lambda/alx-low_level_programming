#include <unistd.h>

/**
 * _putchar - putchar function
 *
 * Return: write function
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
