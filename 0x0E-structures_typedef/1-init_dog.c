#include <stdio.h>
#include "dog.h"

/**
  *init_dog - prints info about a dog
  *@d: dog structure
  *@name: Dog's name
  *@age: Dog's age
  *@owner: Dog's owner
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
