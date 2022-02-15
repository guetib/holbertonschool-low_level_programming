#include "main.h"
#include <stdlib.h>
/**
 *puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 *@str: pointer Dereferencing at string.
 *Return : @str
 */

void puts2(char *str)
{
	while (*str != '\0' || *str == '\0')
	{
		_putchar(*str++);
		str++;
		if(*str == '\0')
		{
			_putchar('\n');
			break;
		}
	}
	/* _putchar('\n'); */
}
