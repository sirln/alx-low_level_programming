#include <stdio.h>
/**
 *main -  program start point
 *
 *Return: print number stored in variable n
 *
 */
int main(void)
{
	int base_16;

	for (base_16 = 0; base_16 < 10; base_16++)
	{
		putchar(base_16 + '0');
	}
	for (base_16 = 0; base_16 < 6; base_16++)
	{
		putchar(base_16 + 'a');
	}
	putchar('\n');

	return (0);
}
