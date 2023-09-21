#include <stdio.h>
/**
 * _strncpy - putchar returns
 * @dest: pointer to the string
 * @src: pointer to the string
 * @n: pointer to the string
 * Return: *char
 *
 *
 */


char *_strncpy(char *dest, char *src, int n);
{
	int i,k;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[k] != '\0' && k < n)
	{
		dest[k] = src[k];
		k++;
		l++;
	}
	k++;
	dest[k] = '\0';

	return(dest);
}

