#include "dog.h"
#include <stdlib.h>
/**
  *free_dog - free memory allocated for strut dog and its items
  *@d: type struct dog
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->age);
		free(d->owner);
		fee(d);
	}
}

