#include "main.h"
/**
 * print_alphabet print alpha from a -> z
 * Return: void value
 */
int _islower(int c)
{	
	int l;
	for (l = 'a'; l <= 'z'; l++)
	{
	if (c == l)
	{
		return(1);
	}	
	
	}
	return(0);

}
