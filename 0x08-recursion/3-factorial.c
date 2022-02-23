#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *factorial - function that returns the factorial of a given number.
 *@n: integer.
 * Return: integer of factorial.
 */

int factorial(int n)
{
	int i = 1;

	if (i <= n)
	{
		int j = n * factorial(n - 1);

		return (j);/* (j abs(j));*/
	}
	else if (n == 0)
		return (1);
	else
		return (-1);
}
