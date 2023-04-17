#include "dog.h"

/**
  * init_dog - function to initialize variable `struct dog`
  *
  * @d: parameter
  * @name: parameter
  * @age: parameter
  * @owner: parameter
  *
  *Return: no return value
  *
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!(d))
		return;

	d->age = age;
	d->name = name;
	d->owner = owner;
}
