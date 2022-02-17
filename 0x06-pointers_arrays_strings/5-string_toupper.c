#include "main.h"
/* #include <string.h> */
#include <stdio.h>

/**
 **string_toupper - function that compares two strings.
 *@s: pointer caracter
 *Return: string of pointer type
 */

char *string_toupper(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;

	return (s);
}
