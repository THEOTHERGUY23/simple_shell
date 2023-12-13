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

	printf("ac = %d\n", ac);
	printf("av content is av[]\n");

	for (e = 0; av[e] != 0; e++)
	{
		printf("%s\n", av[e]);
	}

	return (0);
}
