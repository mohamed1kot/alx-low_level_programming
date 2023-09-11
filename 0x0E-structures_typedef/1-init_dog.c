#include "dog.h"
#include <stdio.h>

/**
 * init_dog - intialize a new dog.
 *
 * @d : a pointer is pointed to struct dog.
 * @name : name of new dog.
 * @age : age of new dog.
 * @owner : the owner of new dog.
 *
 * Return: NULL.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
