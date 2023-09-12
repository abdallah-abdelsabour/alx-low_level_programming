#include "main.h"

/**
 * print_alphabet print alpha from a -> z
 * Return: void value
 */
void jack_bauer()
{	
	int h;
	
	for (h = 0; h < 24; h ++ )
	{
		int m;
		for (m = 0; m < 60;m++ )
		{
			_putchar('0' + h);
			_putchar(':');
			_putchar('0' + m);
			_putchar('\n');
		}
	}
}
