#include "main.h"
#include <string.h>
/* #include <stdio.h> */

/**
 **_strncpy - function that copies a string.
 *@dest: pointer caracter
 *@src: pointer caracter
 *@n: integer
 *Return: @dest of pointer type
 */

char *_strncpy(char *dest, char *src, int n)
{
	/* size_t dest_len = strlen(dest); */
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
