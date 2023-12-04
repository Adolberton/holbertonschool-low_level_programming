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
	ssize_t rd;
	char *str;
	int fd, wc;

	if (!filename)
		return (0);

	str = malloc(sizeof(char) * letters);
	if (!str)*
	return (0);

	fd = open(filemame, O_RDONLY);
	if (fd == -1)
		return (0);
	
	rd = read(fd, str, letters);
	wc = write (1, str, rd);	
	return (wc);
}
