#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line.
 *@s: caracter
 * Return: Void.
 */

void _puts_recursion(char *s)
{
	while (*s != '\0')
		_putchar(*s++);
	_putchar('\n');
}
