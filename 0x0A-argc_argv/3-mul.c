#include <stdio.h>
#include <stdlib.h>

/**
 * main - a programme that multiplies
 * @argc: arguement count
 * @argv: arguement vector
 * Return: 0 - success
 */

int main(int argc, char *argv[])
{
	(void) argc;
	if (argc != 3)
	{	printf("Error\n");
		return (1);
	}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
