#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	int count = 2;

	unsigned long l = 1;
	unsigned long s = l + 1;
	unsigned long n = l + s;

	printf("%lu, ", l);
	printf("%lu, ", s);

	while (counter < 98)
	{
		counter++;
		printf("%lu", n);
		l = s;
		s = n;
		n = l + s;
		if (counter < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
