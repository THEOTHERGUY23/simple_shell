#include <stdio.h>
#include <unistd.h>
/**
 * main - print max pid value
 * Return: (0) Success
 */
int main(void)
{
	printf("%ld\n", (long)getpid());
	return (0);
}
