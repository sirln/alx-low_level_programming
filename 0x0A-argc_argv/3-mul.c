#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  *main - multiplies two numbers.
  *@argc : number of parameters/arguments
  *@argv : array of parameters/arguments
  *
  * Return:  1;
  *
  */

int main(int argc, char **argv)
{
	int results;

	if (argc == 3)
	{
		results = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", results);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
