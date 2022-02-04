#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>
/* more headers goes there */

/**
*  main -  prints all the numbers of base 16 in lowercase
*
* Return: base 16 numbers
*/
int main(void)
{
int n = 48;
while (n >= 48 && n <= 102)
{
putchar(n);
if (n == 57)
n = 96;
n++;
}
putchar('\n');
return (0);
}
