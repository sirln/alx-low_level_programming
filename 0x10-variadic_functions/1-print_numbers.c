#include <stdarg.h>
#include <stdio.h>

/**
  *print_numbers - prints numbers followed by new line.
  *
  *@n: number of arguments parameter
  *@separator: string to print btn numbers
  *
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int l;

	/**
	*if (n == 0 || !separator)
	*	return;
	*
	*/
	va_start(args, n);

	for (l = 0; l < n; l++)
	{
		if (l >= 1 && separator)
			printf("%s", separator);

		printf("%d", va_arg(args, int));
	}
	va_end(args);
	printf("\n");
}
