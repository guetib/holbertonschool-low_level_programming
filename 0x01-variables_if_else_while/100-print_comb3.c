#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>
/**
*  main -  prints all possible combinations of single-digit numbers
*
* Return: numbers separate by goma
*/
int main(void)
{
int n = 48;
int m = 49;
int v = 8;
int j = 0, i = 0, a = 8;
while (i  <= a && a != -1)
{
i++;
while (j <= a)
{
putchar(n);
putchar(m);
putchar(',');
putchar(' ');
m++;
j++;
}
a--;
n++;
m = m - a;
v--;
i = 0;
j = 0;
}
putchar('\n');
return (0);
}
