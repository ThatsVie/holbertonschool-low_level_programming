#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of file
 * @text_content: content to append to the file
 *
 * Return: On success 1, on failure -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, bytes_written;
	int length = 0;

	if (filename == NULL)
		return -1;

	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
			length++;
	}

	file_descriptor = open(filename, O_WRONLY | O_APPEND);

	if (file_descriptor == -1)
		return (-1);

	bytes_written = write(file_descriptor, text_content, length);

	if (bytes_written == -1)
	{
		close(file_descriptor);
		return (-1);
	}

	close(file_descriptor);

	return (1);
}
