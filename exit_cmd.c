#include "shell.h"

/**
* exit_cmd - handles the exit command
* @command: tokenized command
* @line: input read from stdin
*
* Return: no return
*/
void exit_cmd(char **command, char *line)
{
	single(line);
	single_buffers(command);
	exit(0);
}
