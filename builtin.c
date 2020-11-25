#include "holberton.h"

/**
*s_env - prints environment
*
*Return: Always 0
*/
int s_env(void)
{
	unsigned int i;

	i = 0;
	while (environ[i] != NULL)
	{
		write(STDOUT_FILENO, environ[i], _strlen(environ[i]));
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
	return (0);
}
/**
*s_exit - exits
*
*Return: Always 0
*/
int s_exit(void)
{
	return (-1);
}
