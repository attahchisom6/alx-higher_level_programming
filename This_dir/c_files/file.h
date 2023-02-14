#include "dog.h"
 #include <stdio.h>

 /**
  * init_dog - This funxtion will initialize a cariable of type
  * struct dog
  * @struc dog - structure varaiable that gives information of the dog
  * @d:pointer to structure
  * @name:name of the dog
  * @age:age of the dog
  * @owner: of the dog
  */

 void init_dog(struct dog *d, char *name, float age, char *owner)
 {
         if (d != NULL)
         {
                 /*this is the same as d-> name = name etc*/
                 (*d).name = name;
                 (*d).age = age;
                 (*d).owner = owner;
         }
 }

remove trailling whiteapaces
:%s/\s\+$//e
