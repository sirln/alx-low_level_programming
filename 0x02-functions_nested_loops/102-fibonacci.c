#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	int counter = 2;
	long int l = 1;
	long int s = l + 1;
	long int n = l + s;

	printf("%ld, %ld, ", l, s);
	while (counter < 50)
	{
		printf("%ld", n);
		counter++;
		l = s;
		s = n;
		n = l + s;
		if (counter < 50)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
