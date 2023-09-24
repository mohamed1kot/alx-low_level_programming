#include "main.h"

/**
 * argstostr - concate arguments in this array.
 *
 * @ac : count of arguments in array av.
 * @av : input array.
 *
 * Return: pointer of string.
*/

char *argstostr(int ac, char **av)
{
	char *str;
	int count, index, size, i = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (count = 0; count < ac; count++)
	{
		for (index = 0; av[count][index] != '\0'; index++)
			size++;
		size++;
	}
	size++;
	str = malloc(size * sizeof(char));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	for (count = 0; count < ac; count++)
	{
		for (index = 0; av[count][index] != '\0'; index++)
		{
			str[i] = av[count][index];
			i++;
		}
		str[i] = '\n';
		i++;
	}
	str[i] = '\0';
	return (str);

}
