#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>

#define BUFFER 1024
#define PROMPT "$ "

#define ERR_M "Unable to malloc space\n"
#define ERR_F "Unable to fork and create child process\n"
#define ERR_P "No such file or directory\n"
extern char **environ;

/**
 * struct list_s - linked list of variables
 * @value: value
 * @next: pointer to next node
 *
 * Description: generic linked list struct for variables.
**/
typedef struct list_s
{
	char *value;
	struct list_s *next;
} list_s;

/**
 * struct built_s - linked list of builtins
 * @name: name of builtin
 * @p: pointer to function
 *
 * Description: struct for builtin functions.
**/
typedef struct built_s
{
	char *name;
	int (*p)(void);
} built_s;

void prompt(int f, struct stat buf);
char *_getline(FILE *f);
char **split_line(char *str);
char *_which(char *cmd, char *fullpath, char *path);
int fork_process(char *path, char **tokens);
void errors(int error);


void _puts(char *str);
int _strlen(char *s);
int _strcmp(char *name, char *str, unsigned int length);
int _strncmp(char *name, char *variable, unsigned int length);
char *_strcpy(char *dest, char *src);


int s_env(void);
int s_exit(void);
int _execute(char **array);
int _num_builtins(built_s builtin[]);


char *printenv(const char *name);
char **copy_env(char **environ_copy, unsigned int environ_length);
list_s *pathlist(char *variable, list_s *head);

void free_all(char **tokens, char *path, char *line, char *fullpath, int i);
void free_dp(char **array, unsigned int length);
#endif
