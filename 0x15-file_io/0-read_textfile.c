#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reads a text file and prints it to the POSIX standard output
 * @filename: text file
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t wri;
	ssize_t red;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	red = read(fd, buffer, letters);
	wri = write(STDOUT_FILENO, buffer, red);

	free(buffer);
	close(fd);
	return (wri);
}
