#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure containing my data tpes
 * @name:name of dog
 * @age:Age of dog
 * @owner:name of owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
