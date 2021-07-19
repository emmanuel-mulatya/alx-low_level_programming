#include "dog.h"
#include <stdio.h>

/**
  *print_dog - prints Dog's info
  *@d: dog structure
  */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? (d->name) : "nil");
		printf("Age: %lf\n", (d->age) ? (d->age) : 0);
		printf("Owner: %s\n", (d->owner) ? (d->age) : "nil");
	}
}
