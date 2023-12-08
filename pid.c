#include <stdio.h>
#include <unistd.h>

/**
 * main - get parent PID
 *
 * Return: 0
 */

int main(void)
{
	pid_t parent_pid = getppid();

	printf("%d\n", parent_pid);

	return (0);
}
