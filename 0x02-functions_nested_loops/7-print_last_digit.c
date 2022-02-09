#include <stdlib.h>
#include "main.h"

/**
 *print_last_digit - function that prints the last digit of a number.
 *@n: integer
 *Return: @n the value of the last digit
 */
int print_last_digit(int n)
{
	int v = abs(n % 10) + '0';

	_putchar (v);
	return (v - '0');
}
