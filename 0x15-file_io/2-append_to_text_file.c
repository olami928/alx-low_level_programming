#include "main.h"
/**
 * append_text_to_file - adds a text to a file
 * @filename: pointer to the name of the file
 * @text_content: content of the file
 * Return: 1 on success, -1 on failure
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
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (!text_content)
	{
		for (no_letter = 0; text_content[no_letter]; no_letter++)
			;
		rwr = write(fd, text_content, no_letter);
		if (rwr == -1)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
