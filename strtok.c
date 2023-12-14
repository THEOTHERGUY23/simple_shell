#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - spliting the string and counting it.
 * Return: 0.
 */

int main(void)
{
	int i;
	char *str = "All I want to do is code in peace";
	char *stc = malloc(sizeof(char) *strlen(str));
	char delim[10] = " ";
	char *trunks;

	strcpy(stc, str);
	trunks = strtok(stc, delim);

	while (trunks != NULL)
	{
		printf("%s\n", trunks);
		trunks = strtok(NULL, delim);
	}

	for (i = 0; i < 100; i++)
	{
		if (stc[i] == '\0')

		printf("%c", stc[i]);
	}

	return (0);
}
