#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX standard output.
 * @filename: name of file to read.
 * @letters: number of letters to read
 *
 * Return: number of letters successfully read and printed
 * 0 if failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	char *content_buffer;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	content_buffer = malloc(sizeof(char) * letters + 1);
	if (content_buffer == NULL)
		return (0);

	bytes_read = read(file_descriptor, content_buffer, letter);
	if (bytes_read == -1)
		return (0);

	content_buffer[letters + 1] = '\0';
	close(file_descriptor);

	bytes_written = write(STDOUT_FILENO, content_buffer, bytes_read);
	if (bytes_written == -1)
		return (0);

	free(content_buffer);

	return (bytes_read);
}


