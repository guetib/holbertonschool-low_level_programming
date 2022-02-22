#include "main.h"
#include <string.h>
/* #include <stdio.h> */
/**
 **_strchr - function that locates a character in a string.
 *@s: poiter of char type
 *@c: caracter
 *Return:  a pointer to the first occurrence of the character c in
 * the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	char *p = strchr(s, (int) c);

	return (p);
}
