#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - his function is calculate some operations as +,-,/,*
 *
 * @argc : len of argumet v.
 * @argv : the array of arguments.
 *
 * Return: 0
*/

int main(int argc, char **argv)
{
	int (*fun)(int, int);
	char *get_op;
	int one_num;
	int two_num;
	int ans;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	one_num = atoi(argv[1]);
	two_num = atoi(argv[3]);
	get_op = argv[2];
	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*get_op == '/' || *get_op == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	fun = get_op_func(get_op);
	ans = fun(one_num, two_num);

	printf("%d\n", ans);
	return (0);
}
