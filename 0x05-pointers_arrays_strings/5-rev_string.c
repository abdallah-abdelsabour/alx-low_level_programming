#include <stdio.h>
/**
 * print_rev - putchar in reverse order
 * @s: pointer to the string
 * Return: void
 *
 *
 */

void rev_string(char *s)
{
	int i, c, k;
	char *a, aux;

	a = s;

	while (s[c] != '\0')
	{
		c++;
	}

	for (k = 1; k < c; k++)
	{
		a++;
	}

	for (i = 0; i < (c / 2); i++)
	{
		aux = s[i];
		s[i] = *(s+a);
		*a = &aux;
		a--;
	}
}