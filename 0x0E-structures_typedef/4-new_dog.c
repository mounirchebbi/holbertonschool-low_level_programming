#include "dog.h"
#include <stdlib.h>
/**
  *sized - size of string
  *@str: string
  *@i: initialisation
  *Return: size
  */
int sized(char *str, int i)
{
	if (str == NULL)
		return (0);
	if (str[i] == '\0')
		return (0);
	return (1 + sized(str, ++i));
}
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
	int i, size;

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);
	size = sized(name, 0);
	doggo->name = malloc(sizeof(char) * (size + 1));
	size = sized(owner, 0);
	doggo->owner = malloc(sizeof(char) * (size + 1));
	if (doggo->owner == NULL || doggo->name == NULL)
	{
		free(doggo->name);
		free(doggo->owner);
		free(doggo);
		return (NULL);
	}
	doggo->age = age;
	i = 0;
	while (name[i] != '\0')
	{
		doggo->name[i] = name[i];
		i++;
	}
	doggo->name[i] = '\0';
	i = 0;
	while (owner[i] != '\0')
	{
		doggo->owner[i] = owner[i];
		i++;
	}
	doggo->owner[i + 1] = '\0';
	return (doggo);
}
