#include <stdlib.h>
#include "dog.h"

/**
  * new_dog - creates new dog object
  *
  * @name: parameter
  * @age: parameter
  * @owner: parameter
  *
  *Return: new dog object
  *
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	int l = 0, s = 0, x = 0, y = 0;
	dog_t  *n_dog;
	char *n, *o;

	while (name[x] != '\0')
		x++;
	while (owner[y] != '\0')
		y++;
	n_dog = malloc(sizeof(dog_t));
	if (!n_dog)
		return (0);
	n = malloc(sizeof(char) * x++);
	if (!n)
	{
		free(n_dog);
		return (0);
	}
	while (l < x)
	{
		n[l] = name[l];
		l++;
	}
	n[l++] = '\0';
	n_dog->name = n;
	n_dog->age = age;
	o = malloc(sizeof(char) * y++);
	if (!o)
	{
		free(n);
		free(n_dog);
		return (0);
	}
	while (s < y)
	{
		o[s] = owner[s];
		s++;
	}
	o[s++] = '\0';
	n_dog->owner = o;
	return (n_dog);
}
