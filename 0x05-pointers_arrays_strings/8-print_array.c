#include <stdio.h>
/**
 * print_array - putchar in reverse order
 * @str: pointer to the string
 * @n: number of array to the string
 * Return: void
 *
 *
 */

void print_array(int *a,int n)
{
  int i;
  i = 0;
  while (n--)
  {
    printf("%d, ",a[i]);
    i++;
  }
  putchar('\n');

}
