#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers.
 *
 * @argc : count of argument plus 1.
 * @argv : arguments in array.
 *
 * Return: Always 0 or 1.
*/

int main(int argc, char **argv)
{
	int sum = 0;
	int count;
	int i;
	char *ptr;

	count = 1;
	for (; count < argc; count++)
	{
		ptr = argv[count];
		i = 0;
		while (ptr[i] != '\0')
		{
			if (ptr[i] < 48 || ptr[i] > 57)
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
		sum += atoi(ptr);
	}
	printf("%d\n", sum);
	return (0);
}
