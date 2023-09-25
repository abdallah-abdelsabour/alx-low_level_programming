#include <stdio.h>
/*
 * _memcpy - copy constant
 * @dest: cpy dest
 * @src: src destinatio
 * @n: number of n 
 */
char *_memcpy(char *dest ,char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];

	}
	return(dest)
}
