#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	double l = 1, n = 2, s, count = 2;

	printf ("%d, %d, ", l, n);

	while (count < 98)
	{
		s = l + n;
		printf("%d", s);

		if (count <= 98)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}

		l = n;
		n = s;
		count++;
	}

	return (0);
}
