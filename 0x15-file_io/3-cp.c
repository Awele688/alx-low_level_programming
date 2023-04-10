#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buf(char *file);
void close_filed(int fd);

/**
 * create_buf - Assigns 1024 bytes to a buffer.
 * @file: name of file
 *
 * Return: pointer to newly assigned buffer.
 */
char *create_buf(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (!buf)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}

/**
 * close_filed - Closes fd.
 * @fd: file descriptor to be closed.
 */
void close_filed(int fd)
{
	int i;

	i = close(fd);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments supplied to the program.
 * @argv: array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: num of argument is not the correct one,exit with code 97
 *              if file_from does not exist or cannot be read,exit with code 98
 *              If you cannot create or write to file_to,exit with code 99
 *              if you cannot close a fd,exit with code 100
 */
int main(int argc, char *argv[])
{
	int fro, to, red, wri;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buf(argv[2]);
	fro = open(argv[1], O_RDONLY);
	red = read(fro, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fro == -1 || red == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		wri = write(to, buff, red);
		if (to == -1 || wri == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		red = read(fro, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (red > 0);

	free(buff);
	close_filed(fro);
	close_filed(to);

	return (0);
}
