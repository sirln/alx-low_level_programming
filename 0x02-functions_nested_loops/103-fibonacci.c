#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	int counter = 0;
	long int l = 1;
	long int s = l;
	long int n = l + s;

	while (n < 4000000)
	{
		if (n % 2 == 0)
		{
			counter = counter + c;
		}
		l = s;
		s = n;
		n = l + n;
	}
	printf("\n, counter");
	return (0);
}
