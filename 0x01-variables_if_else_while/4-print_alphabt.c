#include <stdio.h>
/**
 *main -  program start point
 *
 *Return: print number stored in variable n
 *
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == 'q' || alpha == 'e')
		{
			continue;
		}
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
