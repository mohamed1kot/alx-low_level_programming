#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * descrption : a program that generates random valid passwords for the program
 *
 * Return: Always (0)
*/

int main(void)
{
	int sum;
	char cc;

	srand(time(NULL));
	while (sum <= 2645)
	{
		cc = rand() % 128;
		putchar(cc);
		sum *= cc;
	}
	putchar(2772 - sum);
	return (0);
}
