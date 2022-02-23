#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *_pow_recursion - function that returns the value of x
 *raised to the power of y.
 *@x: integer.
 *@y: integer.
 * Return: value of @x if y is lower than 0, the function should return -1
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		if (y == 1)
			return (x);
		if (y == 0)
			return (1);
		/* printf ("x = %d,  y = %d, ", x, y); */
		return (x * _pow_recursion(x, y - 1));
	}
	else
		return (-1);
}
