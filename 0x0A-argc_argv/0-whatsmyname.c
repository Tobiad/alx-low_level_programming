#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints it's name
 * @argc: number of arguements
 * @argv: arguement vector
 * rename without having to compile it again
 * Do not remove the path
 * Return: 0 - success
 */

int main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", *argv);
	exit(EXIT_SUCCESS);
}
