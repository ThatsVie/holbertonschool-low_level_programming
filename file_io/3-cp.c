#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main (int argc, char *argv[])
{
	int src_fd, dest_fd;
	ssize_t read_bytes, written_bytes;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,"Usage: cp file_from file_to\n");
		exit(97);
	}

	if ((src_fd = open (argv[1], O_RDONLY)) == -1)
	{
		dprintf(STDERR_FILENO,"Error: Can't read from file %s\n", argv[1]);
		exit (98);
	}

	if ((dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | S_IRUSR | S_IWUSR | S_IRGRP )) == -1)
	{
		close(src_fd);
		dprintf(STDERR_FILENO,"Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}

	while ((read_bytes = read(src_fd, buffer, 1024)) > 0)
	{
		if ((written_bytes = write(dest_fd, buffer, read_bytes)) != read_bytes)
		{
			close(src_fd);
			close(dest_fd);
			dprintf(STDERR_FILENO,"Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (read_bytes == -1)
	{
		close(src_fd);
		close(dest_fd);
		dprintf(STDERR_FILENO,"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(src_fd) == -1 || close(dest_fd) == -1)
	{
		dprintf(STDERR_FILENO,"Error: Can't close fd %d\n",dest_fd);
		exit(100);
	}

	return (0);
}

