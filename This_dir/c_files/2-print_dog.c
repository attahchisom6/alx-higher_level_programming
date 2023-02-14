#include "dog.h"
#include <stdio.h>

/**
 * print_dog - this function print the names of variables
 * passed to it
 * @struct dog - A structure containing the information of the dog
 * *@d:pointer to structure
 */

void print_dog(struct dog *d)
{

	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}

int main(void)
{
	struct dog catty;

	catty.name = "Bingo";
	catty.age = 3.9;
	catty.owner = "Mr Afam";

	print_dog(&catty);
	return (0);
}
