#include "dog.h"
#include <stdlib.h>
/**
  *new_dog - creates new dog
  *@name: first data item
  *@age: second data item
  *@owner: third data item
  *Return: ptr to new dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);
	if (name == NULL || owner == NULL)
		return (NULL);
	doggo->name = name;
	doggo->age = age;
	doggo->owner = owner;
	return (doggo);
}

