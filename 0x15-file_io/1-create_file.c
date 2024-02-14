#include "main.h"

/**
* create_file - function that create a file
* @filename: the name of the file that gonna be created
* @text_content: text to be written to the file
* Return: 1 or -1
*/

int create_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	int i = 0;

	if (fd < 0 || write(1, "", 0) < 0 || !filename)
		return (-1);
	while (text_content[i])
	{
		write(fd, &text_content[i], 1);
		i++;
	}
	close(fd);
	return (1);
}
