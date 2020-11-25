#include "holberton.h"
/**
 * errors - prints errors
 * @error: error number
 * Return: Always 0
 */

void errors(int error)
{
	switch (error)
	{
	case 1:
		write(STDERR_FILENO, ERR_F, _strlen(ERR_F));
		perror("Error");
		break;

	case 2:
		perror("Error");
		break;

	case 3:
		write(STDERR_FILENO, ERR_M, _strlen(ERR_M));
		break;
	case 4:
		write(STDERR_FILENO, ERR_P, _strlen(ERR_P));
		break;

	default:
		return;
	}
}
