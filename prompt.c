#include "holberton.h"
/**
 * _puts - print string
 * @str: string
 * Return: Always 0
 */

void _puts(char *str)
{
	unsigned int length;

	length = _strlen(str);

	write(STDOUT_FILENO, str, length);
}
/**
 * prompt - prints prompt
 * @f: file stream
 * @buf: buffer
**/
void prompt(int f, struct stat buf)
{
	fstat(f, &buf);

	if (S_ISCHR(buf.st_mode))
		_puts(PROMPT);
}
