#include <stdio.h>
/**
 * reverse_array - putchar returns
 * @a: pointer to the string
 * @n: pointer to the string
 * Return: void
 *
 *
 */


void reverse_array(int *a, int n);
{
	l = n - 1;
	while (l >= 0)
	{
		if (l +1 != n)
		{
			printf(", ");
		}
		printf("%d",a[l]);
		l++;

	}
	printf("\n");
}

