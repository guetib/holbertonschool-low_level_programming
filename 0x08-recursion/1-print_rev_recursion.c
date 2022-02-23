#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - function that prints a string in reverse.
 *@s: pointer of caracter.
 * Return: Void.
 */

void _print_rev_recursion(char *s)
{
	if (*s != 0)
		_print_rev_recursion(s + 1);
	_putchar(*s);
}
