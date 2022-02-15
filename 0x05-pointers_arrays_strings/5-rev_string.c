#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 *rev_string - function that reverses a string.
 *@s: table of caracter
 *Return: Void
 */

void rev_string(char *s)
{
	long int i = sizeof(s);
	char *p = s;
	/* while (*p != '\0') */
	/* { */
	/* 	printf("%c" ,*p++); */
	/*  } */
	printf("lent of p = %ld\n", sizeof(p));

	while (i >= 0)
	{
		/* printf("i=%d\n",i); */
		/* printf("siz-i=%ld\n",sizeof(s) - i); */
		/* printf ("%c", s[i--]); */
		*(p + (sizeof(s) - i)) = s[i];
		/* printf("sizeof = %ld \n", sizeof(s)); */
		/* printf("%c\n", s[i]); */
		/* p++; */
		printf("\np=%c\n" ,*p);
	       printf("size of p = %ld\n", sizeof(p));
		i--;

	}
	printf("\n");
	/* sleep(2); */
	/* *s = *p; */
}
