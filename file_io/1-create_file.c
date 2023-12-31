#include "main.h"
/**
 * create_file - creates a file and writes text content to it
 * @filename: name of file to create
 * @text_content: NULL terminated string to write to file
 *
 * Return: 1 on sucess, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, bytes_written;
	int length = 0;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_descriptor == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[length])
			length++;

		bytes_written = write(file_descriptor, text_content, length);
		if (bytes_written == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	return (1);
}


