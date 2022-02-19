#include "main.h"
/* #include <string.h> */
#include <stdio.h>

/**
 **leet - unction that encodes a string into 1337.
 *Letters a and A should be replaced by 4
 *Letters e and E should be replaced by 3
 *Letters o and O should be replaced by 0
 *Letters t and T should be replaced by 7
 *Letters l and L should be replaced by 1
 *@s: pointer caracter
 *Return: string of pointer type
 */

char *leet(char *s)
{
	int i = 0, j;
	char sc[] = {'A', 'E', 'O', 'T', 'L',};
	char n[] = {'4', '3', '0', '7', '1',};

	while (s[i])
	{
		/* printf ("s[i] = %c, ", s[i]); */
		j = 0;

		while (j < 5)
		{
			if (s[i] == sc[j] || s[i] - 32 == sc[j])
			{
				s[i] = n[j];
				break;
			}

			j++;
		}

		i++;
	}
	return (s);
}
