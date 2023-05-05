#include "main.h"
/**
  *get_endianness - checks the endianness.
  *
  *Return: 0 or 1
  *
  */

int get_endianness(void)
{
	int l = 1;
	char *e = (char *)&l;

	if (*e == 1)
		return (1);

	return (0);
}
