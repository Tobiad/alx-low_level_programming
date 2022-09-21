#include "main.h"

/**
 * _strlen - Main function that returns lengthe of string
 * @s: Strinh length
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
