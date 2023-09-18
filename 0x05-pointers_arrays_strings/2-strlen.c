#include <stdio.h>
/**
 * _strlen - return string length
 * @s: string want to return length
 * Return: int
 *
 *
 */

int _strlen(char *s)
{
	int l;
	
	l = 0;
	while (1)
	{
		l++;
		if (*(s + l) == '\0')
		{
			break;
		}
	}
	return(l);
}
