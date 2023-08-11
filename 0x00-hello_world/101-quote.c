#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: A C Program print massege without printf and Puts
 *
 * Return: Always 1 (success)
*/

int main(void)
{
	char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, s, sizeof(s) - 1);
	return (1);
}
