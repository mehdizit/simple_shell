#include "holberton.h"

/**
 * _strcmp - compares two strings.
 * @name: char
 * @str: char
 * @length: length of name
 * Return: 1 otherwise -1
 */
int _strcmp(char *name, char *str, unsigned int length)
{
	unsigned int var_length;
	unsigned int i;

	var_length = _strlen(str);
	if (var_length != length)
		return (-1);

	i = 0;
	while (name[i] != '\0' && str[i] != '\0')
	{
		if (name[i] != str[i])
			return (1);
		i++;
	}
	return (0);
}

/**
 * _strncmp - compares two strings
 *
 * @name: char
 * @variable: char
 * @length: length of sring
 * Return: 1
 */
int _strncmp(char *name, char *variable, unsigned int length)
{
	unsigned int i;

	i = 0;
	while (i < length)
	{
		if (name[i] != variable[i])
			return (-1);
		i++;
	}
	return (1);
}

/**
 * *_strcpy - copies string
 * @dest:char destination
 * @src: char source
 * Return:char destination.
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int j = _strlen(src);

	for (i = 0; i <= j; i++)
		dest[i] = src[i];

	return (dest);
}
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
