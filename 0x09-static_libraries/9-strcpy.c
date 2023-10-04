#include <stdio.h>
/**
 * _strcpy - putchar in reverse order
 * @dest: pointer to the string
 * @src: pointer to the string
 * Return: void
 *
 *
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
