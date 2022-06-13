#include "main.h"
/**
 * _strlen - print the length of string
 * @s: string input
 * Return: nothing
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
