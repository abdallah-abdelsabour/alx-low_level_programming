#include <stdio.h>
/**
 * _strlen - putchar returns
 * @str: pointer to the string
 * Return: void
 *
 *
 */

void _puts(char *str)
{
	int l;
	
	l = 0;
	while(str[l] != '\0')
	{
			putchar(str[l]);
			l++;
	}
	putchar('\n');
}
