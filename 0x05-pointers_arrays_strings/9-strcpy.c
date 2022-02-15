#include "main.h"
#include <stddef.h>
#include <string.h>
/* #include <stdio.h> */

/**
 *_strcpy - function that copies the string pointed to by src,
 *including the terminating null byte (\0), to the buffer pointed to by dest.
 *@dest:pointer of table
 *@src:pointer
 *Return: string
 */

char *_strcpy(char *dest, char *src)
{
	size_t i, n = strlen(src);

	if (n == 0)
	{
		dest[0] = '\0';
		return (dest);
	}
	/* printf ("%ld\n", n); */
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];
	for ( ; i < n ; i++)
		dest[i] = '\0';
	return (dest);
}
