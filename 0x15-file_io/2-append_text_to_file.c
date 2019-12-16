#include "holberton.h"
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: the name of file to create.
 * @text_content: text to add to file.
 * Return: 1 if success or -1 if fails.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd1, fd2, len = 0;

	if (filename == NULL)
		return (-1);

	fd1 = open(filename, O_RDWR | O_APPEND);

	if (fd1 == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	for (len = 0; text_content[len] != '\0'; len++)
		;

	fd2 = write(fd1, text_content, len);
	close(fd1);
	if (fd2 == -1)
	{
		return (-1);
	}
	return (1);
}
