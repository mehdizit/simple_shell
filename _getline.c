#include "holberton.h"
/**
 * _getline - get char from input stream
 * @f: buffer input
 *
 * Return: char read from stream
 */

char *_getline(FILE *f)
{
	char *line;
	ssize_t read;
	size_t len;

	line = NULL;
	len = 0;
	read = getline(&line, &len, f);
	if (read == -1)
	{
		free(line);
		exit(EXIT_SUCCESS);
	}

	return (line);
}
