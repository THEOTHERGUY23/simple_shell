#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_WORDS 120
/**
 * splitString - splits the string
 * @inputString: input if string
 * @delim: reduces words
 * @wordCount: as it says it does.
 * Return: words.
 */

char **splitString(const char *inputString, const char *delimiter, int *wordCount)
{
	char **words = (char **)malloc(MAX_WORDS * sizeof(char *));

	if (words == NULL)
	{
	fprintf(stderr, "If failed to allocate memory.\n");
	exit(EXIT_FAILURE);
	}

	*wordCount = 0;
	char *token = strtok((char *)inputString, delimiter);

	while (token != NULL)
	{
	words[*wordCount] = strdup(token);
	(*wordCount)++;
	if (*wordCount >= MAX_WORDS)
	{
		fprintf(stderr, "Must print error if words are more.\n");
		exit(EXIT_FAILURE);
	}
	token = strtok(NULL, delimiter);
	}

	return (words);
}
/**
 * freeWords - this section is for free words.
 * @words: alows written words
 * @wordCount: as stated above
 * Return: words.
 */

void freeWords(char **words, int wordCount)
{
	for (int i = 0; i < wordCount; i++)

	{
	free(words[i]);
	}
	free(words);
}
/**
 * main - this is were the main code goes.
 * Return: 0.
 */

int main(void)
{
	const char *inputString = "This in these braces must be seen";
	const char *delimiter = " ";

	int wordCount;
	char **words = splitString(inputString, delimiter, &wordCount);

	printf("Number: %d\n", wordCount);
	printf("Words:\n");
	for (int i = 0; i < wordCount; i++)

	{
	printf("%s\n", words[i]);
	}

	freeWords(words, wordCount);

	return (0);
}
