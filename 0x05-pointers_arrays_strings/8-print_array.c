#include <stdio.h>
/**
 * print_array - putchar in reverse order
 * @str: pointer to the string
 * @n: number of array to the string
 * Return: void
 *
 *
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);

		if (j != (n - 1))
		{
			printf(", ");
		}
	}

	printf("\n");
}
