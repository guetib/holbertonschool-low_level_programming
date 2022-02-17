#include "main.h"
#include <string.h>
/* #include <stdio.h> */

/**
 **_strncat - function that concatenates two strings.
 *@dest: pointer caracter
 *@src: pointer caracter
 *Return: @dest of pointer type
 */

char *_strncat(char *dest, char *src, int n)
{
/* int len = strlen(dest), i; */

/* for (i = 0 ; i < n /\*&& *src != '\0' *\/; i++) */
/* { */
 /* printf("%d\n", i); */
/* dest[len + i] = src[i]; */
/* src++; */
/* dest++; */
/* } */
/* printf("i = %d", i); */
/* dest[len + i] = '\0'; */
/* return (dest); */
size_t dest_len = strlen(dest);
int i;

for (i = 0 ; i < n && src[i] != '\0' ; i++)
dest[dest_len + i] = src[i];
dest[dest_len + i] = '\0';

return (dest);
}
