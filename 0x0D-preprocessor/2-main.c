#include <stdio.h>

/**
 * main - print the name ofthe file it was compiled from
 *
 * Return: Always 0
 */

int main(void)
{
	printf("%s\b", __BASE_FILE__);

	return (0);
