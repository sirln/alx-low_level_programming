#include "3-calc.h"

/**
  *main - start of the program
  *
  *@argc: number of arguments
  *@argv: number of arguments
  *
  *Return: program exit status code
  *
  */

int main(int argc, char **argv)
{
	int l = atoi(argv[1]);
	int n = atoi(argv[3]);
	int (*get_op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	get_op = get_op_func(argv[2]);

	if (((*argv[2] == '/') || (*argv[2] == '%')) && (n == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op(l, n));
	return (0);
}
