#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 **cap_string - function that compares two strings.
 *@s: pointer caracter
 *Return: string of pointer type
 */

char *cap_string(char *s)
{
	int i = 0, j = 0;
	char c[] = {'\t','\n', ' ', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (; j <= 11; j++)
	{
		for (; s[i] != '\0'; i++)
		{
			if (s[i] == c[j])
			{
                                /* if (j != 0) */
					i++;
				if (s[i] >= 97 && s[i] <= 122)
					s[i] = s[i] - 32;
				/* else if (S[i] == '\0') */
				/* 	i--; */
			}
		}
        }	/* printf("%c", s[i]); */

	return (s);
}
