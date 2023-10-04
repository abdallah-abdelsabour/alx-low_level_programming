#include <stdio.h>
/*
 * char * _strchr - locate str first 
 * @s: sring pointer to string 
 * @c: char looking for
 */
char *_strchr(char *s ,char c)
{
	int i;
	while (s[i++] != '\0')
	{
		if (s[i] == c)
		{
			return(&s[i]);
		}
	}
	return(NULL);
}
