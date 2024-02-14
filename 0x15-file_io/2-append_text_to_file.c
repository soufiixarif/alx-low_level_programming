#include "main.h"

/**
 * append_text_to_file - function that append text to the end of a file
 * @filename: the name of the file
 * @text_content: the text to be appended
 * Return: 0 or 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int p, wr, l = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[l])
			l++;
	}
	p = open(filename, O_WRONLY | O_APPEND);
	wr = write(p, text_content, l);
	if (p == -1 || wr == -1)
		return (-1);
	close(p);
	return (1);
}