#include <stdio.h>

/**
 * struct dog - A structure containing my data tpes
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

int main(void)
{
	typedef struct dog dog_t;
	dog_t catty;

	catty.name = "Bingo";
	catty.age = 3.7;
	catty.owner = "Mr Afam";

	printf("%s has a dog naned %s, it is %.1f years old\n", catty.owner, catty.name, catty.age);
	return (0);
}
