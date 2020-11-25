#include "holberton.h"
/**
 * main - point to be enter the programe
 *@argc: integer
 *@argv: array of string
 * Return: Always 0.
 */
int main(int __attribute__((unused)) argc, char **argv)
{
	char *line, *search_path, *_path;
	int arg, status, child;
	struct stat buffer;

	while (1)
	{
		prompt(STDIN_FILENO, buffer);
		line = _getline(stdin);
		if (_strcmp(line, "\n", 1) == 0)
		{
			free(line);
			continue;
		}
		argv = split_line(line);
		if (argv[0] == NULL)
			continue;
		status = _execute(argv);
		if (status == 0 || status == -1)
		{
			free(argv);
			free(line);
		}
		if (status == 0)
			continue;
		if (status == -1)
			_exit(EXIT_SUCCESS);
		arg = 0;
		search_path = printenv("PATH");
		_path = _which(argv[0], _path, search_path);
		if (_path == NULL)
			_path = argv[0];
		else
			arg = 1;
		child = fork_process(_path, argv);
		if (child == -1)
			errors(2);
		free_all(argv, search_path, line, _path, arg);
	}
	return (0);
}
