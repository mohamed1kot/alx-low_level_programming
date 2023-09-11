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
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
