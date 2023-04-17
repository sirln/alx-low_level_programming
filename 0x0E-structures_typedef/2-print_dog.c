#include <stdio.h>
#include "dog.h"

/**
  * print_dog - function that prints a `struct dog`
  *
  * @d: parameter
  *
  *Return: no return value
  *
  */
void print_dog(struct dog *d)
{
	if (!(d))
		return;

	if (!(d->name))
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	if (!(d->owner))
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);

	if (d->age < 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);
}
