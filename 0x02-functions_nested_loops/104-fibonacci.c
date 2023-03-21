#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	int counter = 2;
	float l = 1;
	long int s = l + 1;
	long int n = l + s;

	printf("%.0f", l);
	printf("%.0f", s);

	while (counter < 98)
	{
		counter ++
		printf("%.0f", n);
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
