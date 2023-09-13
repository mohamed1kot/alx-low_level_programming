#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - This file should contain the function that selects
 * the correct function to perform the operation asked by the user.
 * You’re not allowed to declare any other function.
 *
 * @s : string operator.
 *
 * Return: NULL or the the fuction pointer.
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (s && s[0] == ops[i].op[0] && !s[1])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
