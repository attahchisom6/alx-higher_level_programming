#include <stdlib.h>
#include <stdio.h>
#include "dog.h"


/**
 * init_dog - calls function
 * @d: struct name
 * @name: dog name
 * @age: age of dog
 * @owner: owner name
 * Description: Function that initialize a variable of type struct dog
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
