#include <stdio.h>
/**
 * _strcmp - putchar returns
 * @s1: pointer to the string
 * @s2: pointer to the string
 * Return: int
 *
 *
 */


int *_strcmp(char *s1, char *s2);
{
	int l , k;

	while (s[l] != '\0')
	{
		l++;
	}	
	while (s2[k] != '\0')
	{
		k++;
	}
	if (l > k)
	{
		return(l);
	}
	if (k > l)
	{
		return(-1);
	}
	return(0);
}

