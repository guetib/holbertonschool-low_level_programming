#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 *jack_bauer - unction that prints every minute of the day of Jack Bauer,
 *starting from 00:00 to 23:59.
 *@n: integer
 *Return: NULL
 */
void jack_bauer(void)
{
	int i = 0;
	for (;i <= 23; i++)
	{
		int j = 0;
		while (j <= 59)
		{
					/* int lastj = print_last_digit(j); */
					/* int lasti = print_last_digit(i); */
					int lastj = j % 10;
					int lasti = i % i;
					/* Total number of digits - 1 */
					int digitj = (int)log10(j);
					int digiti = (int)log10(i);

					/* Find first digit */
       					int firstj = (int)(j / pow(10,digitj));
					int firsti = (int)(i / pow(10,digiti));
					/* printf ("j=%d||i= %d\n",digitj, digiti); */
					/* printf ("j=%d&&i= %d\n",firstj, firsti); */
					_putchar (firsti + '0');
					_putchar (lasti + '0');
					_putchar (':');
					_putchar (firstj + '0');
					_putchar (lastj + '0');
					_putchar ('\n');
					j++;
				}
				i++;
			}
}
