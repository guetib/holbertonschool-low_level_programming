#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>
/* more headers goes there */

/**
*  main - checked n if is less than 6 and not 0 or greater than 5 or is 0
*
* Return: int
*/
int main(void)
{
int n, der;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
/* Cela retournera le nombre total de chiffres - 1 */
/* l = log10(n); */
/* pre = n / pow(10, l); */
der = n % 10;
if (der > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, der);
else if (der == 0)
printf("Last digit of %d is %d and is 0\n", n, der);
else if (der < 6 && n != 0)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, der);
return (0);
}
