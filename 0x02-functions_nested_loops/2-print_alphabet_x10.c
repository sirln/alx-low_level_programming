#include  "main.h"
/**
 *print_alphabet_x10 -  function to print the alphabets 10x
 *
 */
void print_alphabet_x10(void)
{
	char s;
	char l;

	for (l = 0; l < 10; l++)
	{
		for (s = 'a'; s <= 'z'; s++)
		{
			_putchar(s);
		}

		_putchar('\n');

	}
}
