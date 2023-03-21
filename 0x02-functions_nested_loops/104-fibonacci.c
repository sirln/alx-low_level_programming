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

	while (count < 98)
	{
		count++;
		printf("%lu", n);
		l = s;
		s = n;
		n = l + s;
		if (count < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
