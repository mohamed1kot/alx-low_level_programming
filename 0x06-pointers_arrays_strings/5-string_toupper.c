#include  "main.h"

/**
 * string_toupper - a function that changes lowercase letters to uppercase
 *
 * @str: input string
 *
 * Return: str
*/

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - ' ';
		}
	}
	return (str);
}
