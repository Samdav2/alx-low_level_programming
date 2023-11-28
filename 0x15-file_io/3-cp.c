#include "main.h"
/**
 * error_exit - c program that copy content from one file to another
 * @code: A pointer the code
 * @message: A pointer to the message
 * Return: Nothing
 */

void error_exit(int code, const char *message)
{
    dprintf(STDERR_FILENO, "%s\n", message);
    exit(code);
}

int main(int argc, char *argv[])
{
	int fd_from;
	int fd_to;
	char buffer[BUF_SIZE];
	ssize_t byte_read;

    if (argc != 3)
    {
	error_exit(97, "Usage: cp file_from file_to");
    }

	const char *file_from = argv[1];
	const char *file_to = argv[2];

 	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		error_exit(98, "Error: Can't read from file");
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fd_to == -1)
	{
	close(fd_from);
	error_exit(99, "Error: Can't write to file");
	}

	while ((bytes_read = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			error_exit(99, "Error: Can't write to file");
		}
	}

	if (bytes_read == -1)
	{
	close(fd_from);
	close(fd_to);
	error_exit(98, "Error: Can't read from file");
	}

	if (close(fd_from) == -1)
	{
		error_exit(100, "Error: Can't close fd");
	}

    if (close(fd_to) == -1)
	{
	error_exit(100, "Error: Can't close fd");
	}

	return 0;
}
