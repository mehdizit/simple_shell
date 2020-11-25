#include "holberton.h"

/**
 * free_all - frees memory space
 * @tokens: char
 * @path: char
 * @line: char
 * @fullpath: char
 * @i:integer
 * Return: void
 */
void free_all(char **tokens, char *path, char *line, char *fullpath, int i)
{
	free(path);
	free(tokens);
	free(line);
	if (i == 1)
		free(fullpath);
}

/**
 * free_dp - free array of string
 * @array: array of string
 * @length: length of array
 * Return: Always 0.
 */
void free_dp(char **array, unsigned int length)
{
	unsigned int i;

	i = 0;
	while (i < length)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

