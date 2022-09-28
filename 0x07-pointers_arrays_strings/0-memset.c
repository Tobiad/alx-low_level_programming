#include "main.h"

/**
 * _memset - this is a function that fills
 *
 * memory with a constant byte
 * @n: bytes of the memory
 * @s: pointer of n
 * @b: constant byte b
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
