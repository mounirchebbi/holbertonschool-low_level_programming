#ifndef TYPE_DOG
#define TYPE_DOG
/**
  *struct dog - type dog
  *@name: name
  *@age: age
  *@owner: owner
  */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
