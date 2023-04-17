#ifndef DOG_STRUCTURE
#define DOG_STRUCTURE

/**
  * struct dog - structure name
  * @name: First member
  * @owner: Second member
  * @age: Third member
  *
  *Description: dog structure
  *
  */

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
/**
  * function that initialize a variable of type struct dog
  *
  */

void print_dog(struct dog *d);
/**
  * function that prints a struct dog
  *
  */

typedef struct dog dog_t;
/**
  * Giving `struct dog` a new name `dog_t`
  *
  */

dog_t *new_dog(char *name, float age, char *owner);
/**
  * function that creates a new dog.
  *
  */

void free_dog(dog_t *d);
/**
  * function that frees dogs.
  *
  */

#endif
