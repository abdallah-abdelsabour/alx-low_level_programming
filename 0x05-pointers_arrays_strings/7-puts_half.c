#include <stdio.h>
/**
 * puts_half - putchar in reverse order
 * @str: pointer to the string
 * Return: void
 *
 *
 */

void puts_half(char *str)
{
  int i;
  int half_start;

  i = 0;
  while (str[i] != '\0')
  {
    i++;
  }
  if (i % 2 == 0)
  {
    half_start = i / 2;
  }
  else
  {
    half_start = (i +1 ) / 2;
  }
  while ( half_start < i )
  {
    putchar(str[half_start]);
    half_start++;

  }
    putchar('\n');

}
