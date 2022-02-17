
#include "main.h"
/* #include <string.h> */
#include <stdio.h>

/**
 **cap_string - function that compares two strings.
 *@s: pointer caracter
 *Return: string of pointer type
 */

char *cap_string(char *s)
{
	int i = 0/* , j = 0 */;

	for (; s[i] != '\0'; i++)
	{
		if (
			/* j == 0 || */
		    s[i] == '\n'
		    || s[i] == ' '
		    || s[i] == '\t'
		    || s[i] == '.'
		    || s[i] == ';'
		    || s[i] == ','
		    || s[i] == '!'
		    || s[i] == '?'
		    || s[i] == '('
		    || s[i] == ')'
		    || s[i] == '{'
		    || s[i] == '}'
		    || s[i] == '"'
			)
		{
			/* j = 1; */
			i++;
			if (s[i] >= 97 && s[i] <= 122)
				s[i] = s[i] - 32;
			else if (s[i] == '\0')
				i--;
		}
		/* printf("%c", s[i]); */
	}

	return (s);
}
