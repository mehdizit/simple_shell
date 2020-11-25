#include "holberton.h"
/**
 * fork_process - new process
 * @path: path to execute
 * @tokens: split user input
 * Return: 0
 */

int fork_process(char *path, char **tokens)
{
	pid_t child_pid;
	int status;
	int execve_status;
	char **envp = environ;

	child_pid = fork();
	if (child_pid == -1)
	{
		errors(1);
		exit(EXIT_FAILURE);
	}
	if (child_pid == 0)
	{
		execve_status = execve(path, tokens, envp);
		if (execve_status == -1)
			return (-1);
	}
	else
		wait(&status);

	return (0);
}
