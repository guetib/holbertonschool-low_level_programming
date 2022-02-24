#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *_prime_number - function that returns 1 if the input integer is
 * a prime number, otherwise return 0.
 *@n: integer.
 *@d: divisor of @n.
 * Return: 0 or 1;
 */

int _prime_number(int d, int n)
{
	if (n % d == 0 && d != n)
		return (0);

	else if (d == n)
		return (1);

	return (_prime_number(d + 1, n));
}

/**
 *is_prime_number - function that returns 1 if the input integer is
 * a prime number, otherwise return 0.
 *@n: integer.
 * Return: 0 or 1;
 */

int is_prime_number(int n)
{
	if (n >= 2)
	{
		if (n % 2 == 0)
			return (0);
		else
			return (_prime_number(3, n));
	}

	return (0);
}
