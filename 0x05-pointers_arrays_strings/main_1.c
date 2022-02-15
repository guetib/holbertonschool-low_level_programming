#include <stdio.h>

#define LEN 445

void _memset(char *s, char c, int len);

char *_strcpy(char *dest, char *src);

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char cpy[LEN + 1] = {0};
	char *str;
	char *ret;

	_memset(cpy, 'H', LEN);
	str = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
	ret = _strcpy(cpy, str);
	printf("%s\n%s\n%s\n", str, cpy, ret);
	return (0);
}
