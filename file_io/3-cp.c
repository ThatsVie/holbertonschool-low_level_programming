#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - copies content of one file to another
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t bytes_read, bytes_written;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,"Usage: cp file_from file_to\n");
		exit (97);
	}
	if ((file_from = open (argv[1], O_RDONLY)) == -1)
	{
		dprintf(STDERR_FILENO,"Error: Can't read from file %s\n", argv[1]);
		exit (98);
	}

	if ((file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH)) == -1)
	{
		close(file_from);
		dprintf(STDERR_FILENO,"Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
	while ((bytes_read = read(file_from, buffer, 1024)) > 0)
	{
		if ((bytes_written = write(file_to, buffer, bytes_read)) != bytes_read)
		{	
			close(file_from);
			close(file_to);
			dprintf(STDERR_FILENO,"Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		close(file_from);
		close(file_to);
		dprintf(STDERR_FILENO,"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(file_from) == -1 || close (file_to) == -1)
	{
		dprintf(STDERR_FILENO,"Error: Can't close fd %d\n",file_to);
		exit (100);
	}

	return (0);
}

