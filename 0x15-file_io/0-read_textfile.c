#include "holberton.h"
/**
 * read_textfile - function read text file and print to the standard output.
 * @filename:is the name of the file to read.
 * @letters: is the numbers of letters to read and print.
 * Return: the numbers of characters read and printed.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	int cont, temp;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	cont = read(fd, buffer, letters);
	if (cont == -1)
	{
		free(buffer);
		return (0);
	}
	else
	{
		temp = write(STDOUT_FILENO, buffer, cont);
	}
	if (temp < cont)
	{
		free(buffer);
		return (0);
	}
	temp = close(fd);
	if (temp == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (cont);
}
