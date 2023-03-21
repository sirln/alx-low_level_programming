#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	int counter = 2;

	unsigned long int a = 1;
	unsigned long int b = a + 1;
	unsigned long int c = a + b;

	printf("%lu, ", a);
	printf("%lu, ", b);
	while (counter < 91)
	{
		counter++;
		printf("%lu", c);
		a = b;
		b = c;
		c = a + b;
		if (counter < 91)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
