#include "main.h"
/**
 * read_textfile - read file and write in the standar out put
 * @filename: filename
 * @letters: count of letters
 * Return: nbytes.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd = 0, nbytes = 0;

	if (!filename)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	nbytes = read(fd, buf, letters);
	write(STDOUT_FILENO, buf, nbytes);
	close(fd);
	free(buf);
	return (nbytes);
}
