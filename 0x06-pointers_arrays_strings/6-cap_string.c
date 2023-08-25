#include "main.h"

/**
 * is_delimiter - check if charachter is consist from Separators of words
 *
 * @f: is charcter will check it
 *
 * Return: 1 if consist about it if no Return 0
*/

int is_delimiter(char f)
{
	int i;
	char del[] = " \t\n,;.?!\"(){}";

	for (i = 0; i < 12; i++)
	{
		if (f == del[i])
		{
			return (1);

		}
	}
	return (0);
}

/**
 * is_lower - check if s is lower or not
 *
 * @s: char input
 *
 * Return: true if is lower
*/

int is_lower(char s)
{
	return (s >= 97 && s <= 122);
}

/**
 * cap_string - a function that capitalizes all words of a string.
 *
 * @str : input str
 *
 * Return: ptr
*/

char *cap_string(char *str)
{
	char *ptr = str;
	int check = 1;

	while (*str)
	{
		if (is_delimiter(*str))
			check = 1;
		else if (is_lower(*str) && check)
		{
			*str -= 32;
			check = 0;
		}
		else
			check = 0;
		str++;
	}
	return (ptr);
}
