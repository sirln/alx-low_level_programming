#include <stdio.h>

/**
  *main - prints name of program, followed by a new line.
  *@argc : number of parameters/arguments
  *@argv : array of parameters/arguments
  *
  * Return:  0;
  *
  */

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", *argv);
	return (0);
}
