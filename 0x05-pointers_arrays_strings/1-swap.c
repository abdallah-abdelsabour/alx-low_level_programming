#include <stdio.h>
/**
 * swap_int - swap two interger
 * @a: pointer to swap
 * @b: pointer to swap
 * Return: void
 *
 *
 */

void swap_int(int *a, int *b)
{
	int swap;
	swap = *a;
	*a = *b;
	*b = swap;
}
