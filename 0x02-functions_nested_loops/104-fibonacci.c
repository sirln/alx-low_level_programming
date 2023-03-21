#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	float l = 1, n = 2, s;
	int count = 2;

	printf("%.0f, %.0f, ", l, n);

	while (count < 98)
	{
		s = l + n;
		printf("%.0f", s);

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
