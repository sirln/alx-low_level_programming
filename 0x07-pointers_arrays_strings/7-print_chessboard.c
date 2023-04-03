#include  "main.h"
/**
 *print_chessboard - prints a chessboard.
 *
 *@a: parameter
 *
 *Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int l;
	int s;

	for (l = 0; l < 8; l++)
	{
		for (s = 0; s < 8; s++)
		{
			_putchar(a[l][s]);
		}
		_putchar('\n');
	}


}
