#include "main.h"
/**
 * main - copy cp funtion
 * @ac: argc argument
 * @av: argv argument
 * Return: 0.
 */
int main(int ac, char **av)
{
	int fd = 0, fd1 = 0, wr = 0, rd = 0, cl1 = 0, cl2 = 0;
	char buf[1024];

	if (ac > 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	fd = open(av[1], O_RDONLY);
	fd1 = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd < 1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	if (fd1 < 0)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	rd = read(fd, buf, 1024);
	while (rd > 0)
	{
		rd = read(fd, buf, 1024);
		if (rd < 1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		wr = write(fd1, buf, 1024);
		if (wr < 0)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	cl1 = close(fd);
	if (cl1 < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", cl1), exit(100);
	cl2 = close(fd);
	if (cl2 < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", cl2), exit(100);
	return (0);
}
