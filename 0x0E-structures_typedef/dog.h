#ifndef dog_h
#define dog_h

/**
 * struct dog - Define a new type struct dog
 *
 * @name : name of dog.
 * @age : age of dog.
 * @owner : the people who owner this dog.
 *
 * Description: define a just one dog.
*/

struct dog
{
	char* name;
	float age;
	char* owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
