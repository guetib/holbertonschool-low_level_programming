#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
*  main - prints the alphabet in lowercase
*
* Return: character
*/
int main(void)
{
char c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
putchar('\n');
}
return (0);
}
