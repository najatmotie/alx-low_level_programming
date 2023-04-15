#include "main.h"
/**
 * malloc_checked - check if malloc succeed of failed
 * @b: the number of memory space to allocate
 * Return: the pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (!ptr)
		exit(98);
	return (ptr);
}
