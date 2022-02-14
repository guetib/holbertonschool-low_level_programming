#include "main.h"
#include <stdio.h>
/**
 *rev_string - function that reverses a string.
 *@s: table of caracter
 *Return: Void
 */

void rev_string(char *s)
{
	int i = sizeof(s);
	char *p = s;
	/* while (*p != '\0') */
	/* { */
	/*	printf("%c",*p++); */
	/* } */
	while (i >= 0)
	{
		/* printf("i=%d\n",i); */
		/* printf ("%c", s[i--]); */
		*(p + (sizeof(s) - i)) = s[i];
		/* printf("sizeof = %ld \n", sizeof(s)); */
		/* printf("%c\n", s[i]); */
		/* p++; */
		i--;

	}
	/* *s = *p; */
}
