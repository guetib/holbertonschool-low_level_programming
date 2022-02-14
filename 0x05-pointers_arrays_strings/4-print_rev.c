#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *print_rev - function that prints a string, followed by a new line, to stdout.
 *@str: pointer Dereferencing at string.
 *Return : @str
 */

void print_rev(char *str)
{
	int i = 0;
	/* int i = strlen(str); */
	for (i = strlen(str) - 1; i >= 0; i--)
	/* while (i != 0) */
	{
		/* printf("i = %p\n", str++); */
		/* printf("i = %d\n", i); */
		_putchar(str[i]);
	}
	_putchar('\n');
}
