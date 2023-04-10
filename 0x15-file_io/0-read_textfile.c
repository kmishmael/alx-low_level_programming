#include "main.h"
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the
 * standard output
 * @filename: file path of the file to read
 * @letters: maximum number of letters to read from the file
 * Return: the number of letters read and printed, or 0 if an error occurs
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t letters_read, letters_written;
	int fd, buff_size = letters;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * buff_size);
	if (buff == NULL)
		return (0);

	letters_read = read(fd, buff, buff_size);
	if (letters_read == -1)
	{
		free(buff);
		return (0);
	}

	letters_written = write(STDOUT_FILENO, buff, letters_read);
	if (letters_written == -1 || letters_written != letters_read)
	{
		free(buff);
		return (0);
	}

	close(fd);
	free(buff);
	return (letters_read);
}

