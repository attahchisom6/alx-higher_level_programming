#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - This function creates a new structure
 * called dog_t
 * @name:name of new dog
 * @age:age of new dog
 * @owner:owner of new dog
 * 
 * Return:if function fails otherwise return pointer to
 * new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int g, k = 0, p = 0;
	dog_t *new_pet;

	while (name[p] != '\0')
		p++; /*read to the end of name*/
	while (owner[k] != '\0')
		k++;

	/*create space to store variables of the new struct*/
	/*note new struct is already given as dog_t*/
	new_pet = malloc(sizeof(dog_t));
	if (new_pet == NULL)
	{
		free(new_pet);
		return (NULL);
	}
	/*now store the  variable in new_pet*/
	new_pet->name = malloc(p * sizeof(new_pet->name));
	if(new_pet->name == NULL)
	{
		free(new_pet->name);
		free(new_pet);
		return (NULL);
	}
	for (g = 0; g <= p; g++)
	{
		new_pet->name[g] = name[g]; /*copy old dog name to new name*/
	}
	new_pet->age = age;

	/*store the owner variable in new_pet*/
	new_pet->owner = malloc(k * sizeof(new_pet->owner));
	if (new_pet->owner == NULL)
	{
		free(new_pet->owner);
		free(new_pet->name);
		free(new_pet);
		return (NULL);
	}
	for (g = 0; g <= k; g++)
	{
		new_pet->owner[g] = owner[g]; /*copy old dog owner to new owner*/
	}
	return (new_pet);
}

int main(void)
{
	dog_t *catty;

	catty = new_dog("Bingo", 4.5, "Mr Afam");
	printf("%s is the owner of the dog, %s, it is %.1f years old\n", catty->owner, catty->name, catty->age);
}
