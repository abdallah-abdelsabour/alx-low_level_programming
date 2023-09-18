#include <stdio.h>
/**
 * _strlen - return string length
 * @s: string want to return length
 * Return: int
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
