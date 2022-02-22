#include "main.h"
#include <string.h>
/* #include <stdio.h> */
/**
 **_strpbrk - function that searches a string for any of a set of bytes.
 *@s: poiter of char type
 *@accept: pointer of caracter type
 *Return:  Returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept a pointer to the byte in s
 * that matches one of the bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept);
{
	char *p = strpbrk(s, accept);

	return (p);
}
