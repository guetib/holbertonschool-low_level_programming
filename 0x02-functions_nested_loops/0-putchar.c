/*#include <climits>*/
#include "main.h"
/**
* main - program that prints _putchar
*
* Return: 0 on success
*/
int main(void)
{
	char c[] = "_putchar";
	unsigned long int i = 1;
	/*, z = sizeof (c) & INT_MAX;*/
	while (i < sizeof (c))
	{
		_putchar (c[i]);
		i++;
	}
	_putchar ('\n');
	return (0);
}
