#include <stdio.h>
#include "main.h"

/**
 * main - main methon for q 1
 * Return: zero
 */
int main(void)
{
	char c;

	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}
