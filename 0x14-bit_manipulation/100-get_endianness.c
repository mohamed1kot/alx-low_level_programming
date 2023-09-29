#include "main.h"

/**
 * get_endianness -  a function that checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 *
*/

int get_endianness(void)
{
	unsigned int S  = 1;
	char *ch;

	ch = (char *) &S;

	return ((int)*ch);
}
