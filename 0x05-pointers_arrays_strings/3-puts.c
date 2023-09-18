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

	while(*str && *str != '\0')
	{
			putchar(*str++);
	}
}
