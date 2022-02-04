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
int c = 48;
while (c >= 48 && c <= 57)
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
