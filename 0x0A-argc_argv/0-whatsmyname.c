#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line.
 *
 * @argc : count of arrgument.
 * @argv : arrgument value.
 *
 * Return: 0.
*/

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", *argv);
	return (0);
}
