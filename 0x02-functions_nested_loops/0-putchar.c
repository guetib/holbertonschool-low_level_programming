#include "main.h"
/**
* main - program that prints _putchar
*
* Return : 0 on success
*/
int main(void)
{
	char c[] = "_putchar";
	long unsigned int i = 0;
	while (i < sizeof (c))
	{
		_putchar (c[i]);
		i++;
	}
	return (0);
}
