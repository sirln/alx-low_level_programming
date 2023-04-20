#include <stdarg.h>
#include <stdio.h>
/**
  *print_all - prints anything.
  *
  *@format: pointer constant parameter
  *
  */

void print_all(const char * const format, ...)
{
	va_list args;
	int l = 0;
	char *s;
	char *sep = "";

	va_start(args, format);

	while (format && format[l])
	{
		switch (format[l])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				sep = ", ";
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				sep = ", ";
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				sep = ", ";
				break;
			case 's':
				s = va_arg(args, char *);
				if (!s)
					printf("%s(nill)", sep);

				printf("%s%s", sep, s);
				sep = ", ";
				break;
			default:
				break;
		}

		l++;
	}
	va_end(args);

	printf("\n");
}
