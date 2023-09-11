#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - initilize a new_dog.
 *
 * @name : nmae of dog.
 * @age : age o new dog.
 * @owner : the owner of this fog.
 *
 * Return: dog or NULL if fails.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name != NULL || owner != NULL || age < 0)
	{
		dog = (dog_t *)malloc(sizeof(dog_t));
		dog->name = malloc(sizeof(char) * (strlen(name) + 1));
		dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
		dog->name = strcpy(dog->name, name);
		dog->age = age;
		dog->owner = strcpy(dog->owner ,owner);
		return (dog);
	}
	return (NULL);
}
