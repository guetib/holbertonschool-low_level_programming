#include "main.h"
#include <stddef.h>
/* #include <stdio.h> */
/**
 * _strstr - function that locates a substring.
 * @haystack: first string.
 * @needle: string to find.
 * Return: a pointer to the beginning of the located substring, or NULL
 * if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		int j = 0;

		/* printf ("%c = %c ", needle[j],  haystack[i + j]); */
		for (; needle[j] != '\0' ; j++)
		{
			/* printf (" %c ",	needle[j]); */
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (&haystack[i]);
	}
	return (NULL);
}
