#include <stdio.h>
/**
 * print_array - putchar in reverse order
 * @str: pointer to the string
 * @n: number of array to the string
 * Return: void
 *
 *
 */

void print_array(char *str,int n)
{
  int i;
  i = 0;
  while (n--)
  {
    printf("%d, ",str[i]);
    i++;
  }
  putchar('\n');

}
