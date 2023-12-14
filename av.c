#include <stdio.h>

/**
 * main - print arguments using av only
 * @av: print all the command-line arguments
 * @ac: counts argument line
 * Return: (0)
 */
int main(int ac, char **av)
{
	int e;

	printf("av[]\n");

	for (e = 0; av[e] != NULL; e++)
	{
		printf("av = %s\n", av[e]);
	}

	return (0);
}
