#include "main.h"
/* #include <string.h> */
/* #include <stdio.h> */
/* #include <stdlib.h> */

/**
 *_sqr - function that returns the natural square root of a number.
 *@n: integer.
 *@sqr: number increments
 * Return: sqr of  @n, if n does not have a natural square root,
 * the function should return -1
 */
int _sqr(int sqr, int n)
{
	/* int sqr = n / 2; */

	/* printf ("sqr*sqr = %d , sqr = %d & n = %d\n", sqr*sqr, sqr, n); */
	if (sqr * sqr > n)
		return (-1);
	else if (sqr * sqr == n)
		return (sqr);
	return (_sqr(sqr + 1, n));

}

/**
 *_sqrt_recursion - function that returns the natural square root of a number.
 *@n: integer.
 * Return: sqr of  @n, if n does not have a natural square root,
 * the function should return -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqr(1, n));
}
