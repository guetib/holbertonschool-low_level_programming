#include "main.h"
/* #include <string.h> */
#include <stdio.h>

/**
 *reverse_array - function that compares two strings.
 *@a: pointer caracter
 *@n: integer
 *Return: integer of pointer type
 */

void reverse_array(int *a, int n)
{

	int  k = sizeof(a), i = 0;

	printf("n = %d\n", n);
        printf("k = %d\n", k);
	for (; i <= n; i++)
		printf("%d, ", *(a++));

}
