#include "main.h"
#include <string.h>
/* #include <stdio.h> */

/**
 **_strcat - function that concatenates two strings.
 *@dest: pointer caracter
 *@src: pointer caracter
 *Return: @dest of pointer type
 */

char *_strcat(char *dest, char *src)
{
int len = strlen(dest), i, n = strlen(src);

for (i = 0 ; i <= n /*&& *src != '\0' */; i++)
{
 /* printf("%d\n", i); */
dest[len + i] = src[i];
/* src++; */
/* dest++; */
}
/* printf("i = %d", i); */
/* dest[len + i] = '\0'; */
return (dest);
}
