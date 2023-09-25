#include <stdio.h>
/*
 * _memset = copy set value
 * @s: some another thing 
 * @b: some thing
 * @i: some thing here 
 * Return nothing
 */

void _memset(char *s , char b , int n)
{
	int i;
	
	while ( n > 0)
	{
		s[i++] = b;
	}

}

