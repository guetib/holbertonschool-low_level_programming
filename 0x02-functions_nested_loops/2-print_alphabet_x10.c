#include "main.h"

/**
 * print_alphabet_x10 - prints the english alphabet from a-z 10 times.
 *
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	for (; i < 10; i++)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		c = 'a';
		_putchar ('\n');
	}
}
