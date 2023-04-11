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
	int n;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	while (l < argc)
	{
		n = 0;

		while (argv[l][n] != '\0')
		{
			if (argv[l][n] < '0' || argv[l][n] > '9')
			{
				printf("Error\n");
				return (1);
			}
			n++;
		}
		results = results + atoi(argv[l]);
		l++;
	}
	printf("%d\n", results);

	return (0);
}
