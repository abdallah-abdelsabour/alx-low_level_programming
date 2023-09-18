#include <stdio.h>
/**
 * _strlen - return string length
 * @s: string want to return length
 * Return: int
 *
 *
 */

void _strlen(char *s)
{
	int l;
	
	while(1)
	{
	 	l++;
		if(*(s + l) == '\0')
		{
			break;
		}
	}
	return(l);
}
