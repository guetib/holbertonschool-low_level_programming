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
	unsigned long int i = 0;
	/*, z = sizeof (c) & INT_MAX;*/
	for (; i <  9;)
	{
		_putchar (c[i]);
		/*_putchar('A');*/
		i++;
	}
	_putchar ('\n');
	return (0);
}
