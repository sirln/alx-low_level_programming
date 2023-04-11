#include <stdio.h>
#include <stdlib.h>
/**
  *main - adds positive numbers.
  *@argc : number of parameters/arguments
  *@argv : array of parameters/arguments
  *
  * Return:  0 or 1;
  *
  */

int main(int argc, char **argv)
{
	int results = 0;
	int l = 1;

	if (argc > 1)
	{
		while (l < argc)
		{
			if (*argv[l] < '0' || *argv[l] > '9')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				results = results + atoi(argv[l]);
			}
			l++;
		}
		printf("%d\n", results);
		return (0);
	}
	printf("%d\n", 0);
	return (1);
}
