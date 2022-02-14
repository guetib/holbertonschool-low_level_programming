#include <stdio.h>
/**
 *swap_int - function that swaps the values of two integers.
 *@a: integer pointer
 *@b: integer pointer
 *Return : void
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
	/* printf("a = %ls", a); */
	/* printf("&a = %p et &b = %p",(void *)&a,(void *)&b); */
	/* printf("a=%d, b=%d\n", *a, *b); */
}
