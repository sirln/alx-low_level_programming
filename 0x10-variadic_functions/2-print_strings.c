#include <stdarg.h>
#include <stdio.h>
/**
  *print_strings - prints strings followed by new line.
  *
  *@n: number of arguments parameter
  *@separator: string to print btn the strings
  *
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int l;
	char *strs;

	va_start(args, n);

	for (l = 0; l < n; l++)
	{
		strs = va_arg(args, char*);

		if (l > 0 && separator)
			printf("%s", separator);

		if (!strs)
			printf("(nil)");
		else
			printf("%s", strs);
	}
	va_end(args);
	printf("\n");
}
