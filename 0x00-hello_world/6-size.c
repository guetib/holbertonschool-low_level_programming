#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char charType;
int intType;
long int lintType;
long long int llintType;
float floatType;

/*
* sizeof evaluates the size of a variable
*/
printf("Size of a char:: %zu bytes\n", sizeof(charType));
printf("Size of an int: %zu bytes\n", sizeof(intType));
printf("Size of a long int: %zu bytes\n", sizeof(lintType));
printf("Size of a long long int: %zu byte\n", sizeof(llintType));
printf("Size of a float:  %zu byte\n", sizeof(floatType));
return (0);
}
