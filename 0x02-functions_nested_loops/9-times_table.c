#include "main.h"

/**
 *times_table - unction that prints the 9 times table, starting with 0.
 *
 *Return: Nothing
 */
void times_table(void)
{
	int i = 0;

	for (; i <= 9; i++)
	{
		int j = 0;

		while (j <= 9)
		{
			int v = i * j;

			if (v > 9)
			{
			_putchar (v / 10 + '0');
			_putchar (v % 10 + '0');
			}
			else if (j != 0)
			{
				_putchar (' ');
				_putchar (i * j + '0');
			}
			else
				_putchar (i * j + '0');
			if (j != 9)
			{
				_putchar (',');
				_putchar (' ');
			}
			j++;
		}
		_putchar ('\n');
	}
}
