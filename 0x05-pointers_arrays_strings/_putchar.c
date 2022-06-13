#include <unistd.h>

/**
 * _putchar - write character method
 * @c: print character
 * Return: 1 for seccess if not -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
