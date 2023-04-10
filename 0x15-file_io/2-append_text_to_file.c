#include "main.h"

/**
 * append_text_to_file - appends text to an existing file
 * @filename: name of the file to append to
 * @text_content: text content to append to the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t wb;
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		wb = write(fd, text_content, strlen(text_content));
		if (wb == -1)
		{
			close(fd);
			return (-1);
		}
	}

	if (close(fd) == -1)
		return (-1);

	return (1);
}

