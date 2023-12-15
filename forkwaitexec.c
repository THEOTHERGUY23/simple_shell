#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdlib.h>

/**
 * main -to print the child directory five times.
 * Return: (0).
 */

int main(void)
{
	int numChildren = 5;
	char *args[] = {"ls", "-l", "/tmp", NULL};
	pid_t child_pid;
	int i;

	for (i = 1 ; i <= numChildren ; i++)
	{
		child_pid = fork();
		if (child_pid < 0)
		{
			perror("Error:");
			return (1);
		}
	}

	if (child_pid == 0)
	{
		execve("/usr/bin/ls", args, NULL);
		perror("Error:");
		exit(1);
	}
	else
	{
		wait(NULL);
	}

	return (0);
}
