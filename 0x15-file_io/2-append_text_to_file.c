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
	int fd, bytes_written, content_length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (content_length = 0; text_content[content_length];)
			content_length++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	bytes_written = write(fd, text_content, content_length);

	if (fd == -1 || bytes_written == -1)
		return (-1);

	close(fd);

	return (1);
}
