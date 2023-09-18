#include <stdio.h>
/**
 * print_rev - putchar in reverse order
 * @str: pointer to the string
 * Return: void
 *
 *
 */

void print_rev(char *s)
{
	int last_char;
  last_char = 0;
	while(s[last_char] != '\0')
	{
			last_char++;
	}
  while(last_char + 1 )
  {
      putchar(s[last_char]);
      last_char--;
  }


}
