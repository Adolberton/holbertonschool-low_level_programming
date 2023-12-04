#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print, 0 if:
 * - the file can not be opened or read
 * - filename is NULL
 * - write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file = 0;
	ssize_t bytes_read = 0;
	ssize_t bytes_written = 0;
	char *file_content = NULL;

	if (filename == NULL)
		return (0);

	file_content = malloc(letters);
	if (file_content == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(file_content);
		return (0);
	}

	bytes_read = read(file, file_content, letters);
	if (bytes_read == -1)
	{
		free(file_content);
		close(file);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, file_content, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(file_content);
		close(file);
		return (0);
	}

	close(file);
	free(file_content);

	return (bytes_written);
}
