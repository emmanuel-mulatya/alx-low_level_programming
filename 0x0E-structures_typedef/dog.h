#ifndef DOG_H
#define DOG_H

/**
  *struct dog - shows a dog info
  *@name: Dog's name
  *@age: Dog's age
  *@owner: Dog's owner
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
  *dog_t - Typedef for structure dog
  */

typedef struct dog dog_t;
#endif /*DOG_H */
