#include "main.h"
#include <string.h>
/**
* append_text_to_file - appends text at the end of a file
* @filename: name of the file
* @text_content: NULL terminated string to add at the end of the file
*
* Return: 1 if the file exists and -1 if the file does not exist
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len;
	ssize_t w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

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
