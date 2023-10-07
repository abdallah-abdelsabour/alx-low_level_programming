#include <stdio.h>
#include <stdlib.h>

/*
* malloc_checked - return memo allocate
* @b :allocate space 
* Return : ptr
*
 * */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	*ptr = malloc(b);
	if (!ptr)
	{
		exit(98);
	}	
	return(ptr);
}
