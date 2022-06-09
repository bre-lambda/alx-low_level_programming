#include <unistd.h>

/**
 * _putchar - character method
 * @c: character
 * Return: one if success,else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
