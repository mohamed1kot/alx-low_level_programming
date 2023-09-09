#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that multiplies two numbers.
 *
 * @argc : count of argument ADD 1.
 * @argv : argument value.
 *
 * Return: 1 or 0.
*/

int main(int argc, char **argv)
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[argc - 2]) * atoi(argv[argc - 1]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
