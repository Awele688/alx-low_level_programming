#include "main.h"
#include <string.h>

/**
* create_file - Creates a file.
* @filename: name of the file to create
* @text_content:  is a NULL terminated string to write to the file
*
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len;
	ssize_t w;
	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	len = 0;

	if (text_content != NULL)
	{
		len = strlen(text_content);
		w = write(fd, text_content, len);

		if (w == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
