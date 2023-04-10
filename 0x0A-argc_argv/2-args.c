#include <stdio.h>
/**
  *main - prints all arguments it receives.
  *@argc : number of parameters/arguments
  *@argv : array of parameters/arguments
  *
  * Return:  0;
  *
  */

int main(int argc, char **argv)
{
	(void)argc;
	while (*argv)
	{
		printf("%s\n", *argv);
		argv++;
	}
	return (0);
}
