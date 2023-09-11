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
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - alias a new name of data type.
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
