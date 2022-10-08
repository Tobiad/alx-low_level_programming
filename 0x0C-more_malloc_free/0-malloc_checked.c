#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocated memmory
 * @b: integer byte
 *
 * Return: allocated memory
 * if malloc fails, the retuen valuw shoukd be 98
 */

void *malloc_checked(unsigned int b)
{
	char *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);

	return (s);
}
