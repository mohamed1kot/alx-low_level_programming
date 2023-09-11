#include "dog.h"
#include <stdio.h>

/**
 * print_dog - a function that prints a struct dog.
 *
 * @d : pointer is poited to current dog.
 *
 * Return: NULL.
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		;
	}
	else if ((*d).name == NULL)
	{
		printf("Name: (nil)");
	}
	else if ((*d).owner == NULL)
	{
		printf("Owner: (nil)");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
