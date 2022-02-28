#include "main.h"
/* #include <string.h> */
/* #include <stdio.h> */

/**
 *reverse_array - function that compares two strings.
 *@a: pointer caracter
 *@n: integer
 *Return: integer of pointer type
 */

void reverse_array(int *a, int n)
{

	int k, i = 0;

	/* printf("n = %d\n", n); */

	for (; i < n / 2; i++)
	{
		/* printf("%d, ", *(a++)); */
		k = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = k;
	}

}
