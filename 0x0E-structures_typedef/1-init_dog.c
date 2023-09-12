0x0E. C - Structures, typedef
=> dog.h


#ifndef DOG

#define DOG


   /**

    * struct dog - dog class

    *

    * @name: Name of the dog

    *

    * @age: Age of the dog

    *

    * @owner: Owner of the dog

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


=>1-init_dog.c


#include "dog.h"


/**

* init_dog - initializes a structure of type dog

* @d: pointer to structure

* @name: pointer to the name of the dog

* @age: age of dog

* @owner: pointer to owner of dog

*

* Return: void

*/

void init_dog(struct dog *d, char *name, float age, char *owner)

{

   if (d)

   {

       d->name = name;

       d->age = age;

       d->owner = owner;

   }

}
