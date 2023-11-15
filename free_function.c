#include "shell.h"

/**
* single_buffers - singles buffers
* @buf: buffer to be freed
*
* Return: no return
*/
void single_buffers(char **buf)
{
	int i = 0;

	if (!buf || buf == NULL)
		return;
	while (buf[i])
	{
		single(buf[i]);
		i++;
	}
	single(buf);
}
