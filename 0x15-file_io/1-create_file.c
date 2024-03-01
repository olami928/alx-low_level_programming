#include "main.h"
/**
 * create_file - a file that create a file
 * @filename: a pointer to the file
 * @text_content: the content of the file
 * Return: 1 on success or -1 if failed
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int no_letter;
	int rwr;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = " ";
	}
	for (no_letter = 0; text_content[no_letter]; no_letter++)
	;
	rwr = write(fd, text_content, no_letter);

	if (rwr == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
