#include "main.h"
#include <string.h>
#include <stdio.h>
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

	/* printf("strlen(needle) = %d\n",(int)strlen(needle)); */
	for (;/* i < (int)strlen(haystack)*/haystack[i] != '\0'; i++)
	{
		int j = 0;

		for (; needle[j] != '\0'
			     /* j < (int)strlen(needle) - 1 */; j++)
		{
			printf ("aa");
			/* if (needle[j] == haystack[i]) */
			/* { */
				printf("haystack[%d] = %c  ",i , haystack[i]);
				*p = *p + haystack[i];
				/* printf ("p = %c", *p); */
			/* } */
		}
	}
	return (p);
}
