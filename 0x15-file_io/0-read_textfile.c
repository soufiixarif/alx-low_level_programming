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
	int fd = open(filename, O_RDONLY);
	char *s;
	int i = 0;
	ssize_t c = 0;

	if (fd == -1 || read(fd, 0, 0) == -1 || !filename)
		return (0);
	s = malloc(letters);
	if (!s)
		return (0);
	c = read(fd, s, letters);
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (c);
}
