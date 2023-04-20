#include <stdlib.h>
#include <stdio.h>

/**
  *main - start of program
  *
  *@argc: number of arguments
  *@argv: array of arguments
  *
  *Return: exit value
  *
  */

int main(int argc, char **argv)
{
	int l = 0;
	unsigned char *opcodes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(*(argv + 1)) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	opcodes = (unsigned char *)main;

	while (l < atoi(argv[1]))
	{
		printf("%.2x", opcodes[l]);

		if (l == (atoi(argv[1]) - 1))
		{
			break;
		}
		printf(" ");

		l++;
	}
	printf("\n");

	return (0);
}
