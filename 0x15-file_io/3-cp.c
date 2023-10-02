#include "main.h"

/**
 * main -  a program that copies the content of a file to another file.
 *
 * @argc : number of arguments file.
 * @argv : list of currant directory files.
 *
 * Return: NULL.
*/

int main(int argc, char **argv)
{
	int file_from, file_to, num = 0, num1 = 0;
	char BUFF[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to"), exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(file_from), exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]), exit(99);
	}
	num = read(file_from, BUFF, 1024);
	if (num == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(file_from), close(file_to), exit(98);
	}
	num1 = write(file_to, BUFF, num);
	if (num1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(file_from), close(file_to), exit(99);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", file_to), exit(100);
	}
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", file_from), exit(100);
	}
	close(file_to), close(file_from);
	return (0);
}
