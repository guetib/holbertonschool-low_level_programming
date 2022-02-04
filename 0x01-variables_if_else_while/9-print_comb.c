#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>
/* more headers goes there */

/**
*  main -  prints all possible combinations of single-digit numbers
*
* Return: numbers separate by goma
*/
int main(void)
{
int n = 48;
while (n >= 48 && n <= 57)
{
putchar(n);
if (n != 57){
putchar(',');
putchar(' ');
}
n++;
}
putchar('\n');
return (0);
}
