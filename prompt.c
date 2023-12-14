#include <stdio.h>
#include <stdlib.h>

/**
 * main - a code that prints '$' and a command line.
 * Return: 0.
 */

int main()
{
	printf("$ ");

	char *command = NULL;
	size_t bufsize = 0;

	size_t input_size = getline(&command, &bufsize, stdin);

	if (input_size == -1)
	{
		printf("EOF. Exiting...\n");
		free(command);
	}

	printf("%s", command);

	free(command);

	return 0;
}
