#include "main.h"
#include <string.h>
/* #include <stdio.h> */
/**
 **_strstr -function that locates a substring.
 *@haystack: poiter of char type
 *@needle: pointer of caracter type
 *Return: Returns a pointer to the beginning of the located substring, or NULL
 * if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *p = NULL;
	int i = 0;

	for (;/* i < (int)strlen(haystack)*/haystack[i]/* != '\0' */ ; i++)
	{
		int j = 0;

		for (; j < (int)strlen(needle) - 1; j++)
		{
			/* printf("str = %d", i); */
			if (needle[j] == haystack[i])
			{
				p = &haystack[i];
				/* printf ("p = %c", *p); */
			}
			else
					break;
		}
	}

	return (p);
}
