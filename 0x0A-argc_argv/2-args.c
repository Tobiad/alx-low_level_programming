#include <stdio.h>
#include <stdlib.h>

/**
 * main - programme that prints all args
 * @argv: arguement vectors
 * @argc: arguement counts
 * Return: 0 - success
 */

int main(int argc, char *argv[])
{
	int i;

	printf("argc = %d\n", argc);

	for (i = 0; i < argc; i++)
	{
	printf("argv[%d] = %s\n", i, argv[i]);
	}
	return (0);
}
