#include "main.h"

/**
 * append_text_to_file - Function that appends thext to file
 * @filename: Variable pointer to the file name
 * @text_content: Variable for the string to add
 *
 * Return: Returns --1 if there's error or -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int content_length;
	ssize_t bytes_written;

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}

	content_length = 0;

	while (text_content[content_length] != '\0')
	{
		content_length++;
	}

	bytes_written = write(fd, text_content, content_length);

	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
