#include "main.h"

/**
 * create_file - Create a function that creates a file.
 *
 * @filename : is the name of the file to create and
 * @text_content : is a NULL terminated string to write to the file.
 *
 * Return: if filename is NULL return -1
 * if text_content is NULL create an empty file.
*/

int create_file(const char *filename, char *text_content)
{
	int file;
	int i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	while (text_content[i] != '\0')
		i++;
	write(file, text_content, i);
	close(file);
	return (1);
}
