#include "main.h"

/**
 * swap_int - function that swap two numbers
 * @num1: inout number
 * @num2: input number
 * Return: Nothing
 */
void swap_int(int *num1, int *num2)
{
	int temp;

	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
