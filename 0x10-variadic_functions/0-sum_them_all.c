#include <stdarg.h>
/**
  *sum_them_all - sums all its arguments
  *
  *@n: number of arguments parameter
  *
  *Return: sum or 0
  *
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int l;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (l = 0; l < n; l++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
