#include "main.h"
#include <stdio.h>

/**
* read_textfile - function that read text from file
* @filename: the file where we gonna read
* @letters: number fo letters we should read
* Return: 0 or number of letters that has been read
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd = open(filename, O_RDONLY);
	char *s;

	ssize_t cw = 0;
	ssize_t c = 0;

	if (fd == -1 || read(fd, 0, 0) == -1 || !filename)
	{
		close(fd);
		return (0);
	}
	s = malloc(letters);
	if (!s)
		return (0);
	c = read(fd, s, letters);
	cw = write(STDOUT_FILENO, s, c);
	free(s);
	close(fd);
	if (c != cw)
		return (0);
	return (c);
}
