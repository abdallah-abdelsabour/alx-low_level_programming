#include <stdio.h>
/**
 * puts2 - putchar in reverse order
 * @str: pointer to the string
 * Return: void
 *
 *
 */

void puts2(char *str)
{
  int i;
  int l;

  l = 1;
  i = 0;
  while (str[i] != '\0')
  {
    if (l == 1 )
    {
      putchar(str[i]);
    }
    l *= -1;
    i++;
  }
  putchar('\n');
}
