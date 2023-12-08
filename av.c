#include <stdio.h>

/**
 * main - print arguments using av only
 * @av: print all the command-line arguments
 * @ac: counts argument line
 * Return: (0)
 */
int main(int ac, char **av)
{
	int e = 0;

	while (av[e] != 0)
	{
		printf("%d:%s\n", e, av[e]);
		e++;
	}

	return (0);
}
