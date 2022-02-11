#include  <stdio.h>
#include "main.h"
/**
 *print_to_98 - function that prints all natural numbers from n to 98, followed
 *by a new line
 *@n: integer
 *Return: Nothing
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; --n)
			printf("%d, ", n);
	}
	else
	{
		for (; n <= 97; n++)
			printf("%d, ", n);
	}
	printf("98\n");
}
