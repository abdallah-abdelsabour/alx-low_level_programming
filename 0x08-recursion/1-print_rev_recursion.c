#include <stdio.h>
/**
 * _print_rev_recursion -print stri in reverse order
 * @s: string to print out
 * Return : void value
*/


void _print_rev_recursion(char *s)
{
  if (!*s)
  {
       return; /* nothing to*/
  }
  _print_rev_recursion(++s);
  putchar(*s);
}

void main(){
  _print_rev_recursion("123456789");
}