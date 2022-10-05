#include <stdio.h>
#include <stdlib.h>

/**
 * main - programme that prints number of args
 * @argv: vector variable
 * @argc: variable counts
 * Return: 0 - success
 */

int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
