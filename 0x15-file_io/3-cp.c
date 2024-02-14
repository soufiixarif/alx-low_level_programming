#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
void close_it(int fd);

/**
 * main - function that copie contents from file to another file
 * @argc: nuber of args
 * @argv: value of args
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i, fd1, rd, fd2, wr;
	char *buffer;

	buffer = malloc(1024);
	if (buffer == NULL)
		return (-1);
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close_it(fd1);
		exit(99);
	}
	for (i = 0; i < 1024; i++)
	{
		rd = read(fd1, buffer, 1024);
		if (rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		wr = write(fd2, buffer, rd);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close_it(fd1);
			close_it(fd2);
			exit(99);
		}
	}
	free(buffer);
	close_it(fd1);
	close_it(fd2);
	return (0);
}

/**
 * close_it - function that close a file
 * @fd: the file in question
 */

void close_it(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}