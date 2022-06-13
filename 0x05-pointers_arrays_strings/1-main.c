#include "main.h"
#include <stdio.h>

/**
 * main - main method
 * Return: zero
 */
int main(void)
{
	int num1;
	int num2;

	num1 = 98;
	num2 = 42;
	printf("num1= %d,num2=%d\n", num1, num2);
	swap_int(&num1, &num2);
	printf("num1=%d, num2=%d\n", num1, num2);
	return (0);
}
