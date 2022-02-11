#include "main.h"

/**
 *print_line - function that draws a straight line in the terminal.
 * followed by a new line.
 *@n:int
 *Return: void
 */

void print_line(int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
