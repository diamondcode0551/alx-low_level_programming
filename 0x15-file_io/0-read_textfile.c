#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads the text file and print to the STDOUT
 * @filename: The file to be read containing text
 * @letters: Number of letters of the text
 * Return: 0 if file cannot be opened
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t a;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	a = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (a);
}
