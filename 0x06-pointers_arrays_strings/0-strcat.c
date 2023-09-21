#include <stdio.h>
/**
 * _strcat - putchar returns
 * @dest: pointer to the string
 * @src: pointer to the string
 * Return: *char
 *
 *
 */

char *_strcat(char *dest, char *src)
{
	int i,k;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[k] != '\0')
	{
		dest[i] = src[k];
		k++;
		i++;
	}
	i++;
	dest[i] = '\0';

	return(dest);
}

