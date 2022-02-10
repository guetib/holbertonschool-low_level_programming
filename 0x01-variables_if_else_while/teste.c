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
int n = 48, i = 0, j = 0, k;
int a = 8;


while (i <= 37)
{

for (; j < 7; j++)
{
for (k = 0; k < 3; k++)
{
putchar (n);
putchar (n+1);
putchar (n+2);

putchar(',');
putchar(' ');
}
}
n++;
//m = m - a;
a--;
i++;
j = 0;
}
putchar('\n');
return (0);
}