#include "main.h"
/**
 * append_text_to_file - append text to file
 * @filename: filename
 * @text_content: content of the file
 * Return: 1 or -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0, wr = 0, i;

	if (!text_content)
		text_content = "";
	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			;
		wr = write(fd, text_content, i);
		if (wr < 0)
			return (-1);
	}
	close(fd);
	return (1);
}
