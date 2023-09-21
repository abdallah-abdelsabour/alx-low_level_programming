#include <stdio.h>
/**
 * _strncat - putchar returns
 * @dest: pointer to the string
 * @src: pointer to the string
 * @n: pointer to the string
 * Return: *char
 *
 *
 */


char *_strncat(char *dest, char *src, int n);
{
	int i,k;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[k] != '\0' && k < n)
	{
		dest[i] = src[k];
		k++;
		l++;
	}
	l++;
	dest[l] = '\0';

	return(dest);
}

