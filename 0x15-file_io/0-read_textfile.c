#include "main.h"
/**
 * read_textfile - prints a ile to the POSIX standard output
 *
 * @filename: name of the file pointer
 * @letters: number of letters printed
 * Return: number o letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t no_rd, no_rw;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		return (0);
	}
	no_rd = read(fd, buff, letters);
	no_rw = write(STDOUT_FILENO, buff, no_rd);

	close(fd);
	free(buff);
	return (no_rw);
}
