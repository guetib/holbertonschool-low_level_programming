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
size_t j = 0;
size_t i = 0;
int a = 8;
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
m = m - v;
v--;
i = 0;
j = 0;
}
putchar('\n');
return (0);
}
