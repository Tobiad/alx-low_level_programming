#include "main.h"

/**
 * int _strlen(char *s) - Main function that returns lengthe of string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
