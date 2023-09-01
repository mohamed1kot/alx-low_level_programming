#include "main.h"

/**
 * _strlen - Write a function that returns the length of a string.
 *
 * @s : input string
 *
 * Return: Always counter
*/

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
	{
		++counter;
	}
	return (counter);
}
