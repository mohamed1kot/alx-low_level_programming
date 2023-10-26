#include "main.h"

/**
 * read_textfile - a function that reads a text
 * file and prints it to the POSIX standard output.
 *
 * @filename : is the name of the file to create.
 * @letters :  is the number of letters it should read and print
 *
 * Return:  the actual number of letters it could read and print.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t new;
	ssize_t from;
	ssize_t to;
	char *text;

	text = malloc(letters);
	if (!text || !filename)
		return (0);
	new = open(filename, O_RDONLY);
	if (new == -1)
	{
		free(text);
		return (0);
	}
	from = read(new, text, letters);
	to = write(STDOUT_FILENO, text, from);
	close(new);
	return (to);
}
