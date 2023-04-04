#include <stdio.h>
/**
 *main -  program start point
 *
 *Return: print number stored in variable n
 *
 */
int main(void)
{
	char reverse_alpha;

	for (reverse_alpha = 'z'; reverse_alpha >= 'a'; reverse_alpha--)
	{
		putchar(reverse_alpha);
	}
	putchar('\n');

	return (0);
}
