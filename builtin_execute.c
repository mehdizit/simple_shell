#include "holberton.h"
/**
*_execute - executes the built in functions
*@tokens: arguments being passed
*Return: tokens
*/
int _execute(char **tokens)
{
	int status;
	unsigned int length;
	unsigned int num;
	unsigned int i;

	built_s builtin[] = {
		{"exit", s_exit},
		{"env", s_env},
		{NULL, NULL}
	};

	if (tokens[0] == NULL)
		return (1);

	length = _strlen(tokens[0]);

	num = _num_builtins(builtin);
	for (i = 0; i < num; i++)
	{
		if (_strcmp(tokens[0], builtin[i].name, length) == 0)
		{
			status = (builtin[i].p)();
			return (status);
		}
	}
	return (1);
}

/**
**_num_builtins - this check num built-ins
**@builtin: takes the builtin to be counted
**Return: num of built-ins
**/

int _num_builtins(built_s builtin[])
{
	unsigned int i;

	i = 0;
	while (builtin[i].name != NULL)
		i++;

	return (i);
}
