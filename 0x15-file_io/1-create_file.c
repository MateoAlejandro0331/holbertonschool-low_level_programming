#include "main.h"
/**
 * create_file - create a file
 * @filename: filename
 * @text_content: content of the file
 * Return: 1 or -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 0, wr = 0, i;

	if (!text_content)
		text_content = "";
	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd < 0)
		return (-1);
	for (i = 0; text_content[i]; i++)
		;
	wr = write(fd, text_content, i);
	if (wr < 0)
		return (-1);
	close(fd);
	return (1);
}
