#include "dog.h"
/**
  *init_dog - initialisation
  *@d: pointer to variable type struct dog
  *@name: name
  *@age: age
  *@owner: owner
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
