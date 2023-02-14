#include "dog.h"
#include <stdio.h>

/**
 * int_dog - This funxtion will initialize a cariable of type
 * struct dog
 * @struc dog - structure varaiable that gives information of the dog
 * @name:name of the dog
 * @age:age of the dog
 * @:owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}

int main(void)
{
	struct dog catty;
                                            init_dog(&catty, "bingo", 3.7, "Mr Afam");

        printf("%s has a dog naned %s, it is %.1f years old\n", catty.owner, catty.name, catty.age);
        return (0);
}
