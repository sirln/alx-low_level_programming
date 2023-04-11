#include <stdlib.h>
#include <stddef.h>
/**
 *argstostr - concatenates all the arguments of your program.
 *
 *@ac: parameter
 *@av: parameter
 *Return: NULL or pointer.
 */

char *argstostr(int ac, char **av)
{
	char *ls;
	int l, n, s = 0, x = 0, y, z = 0;

	if (ac == 0 || av == NULL)
		return (NULL);


	for (l = 0; l < ac; l++)
	{
		n = 0;

		while (av[l][n] != '\0')
		{
			n++;
		}
		s += n + 1;
	}

	ls = malloc(sizeof(char) * s);

	if (ls == NULL)
		return (NULL);

	while (x < ac)
	{
		y = 0;
		while (av[x][y] != '\0')
		{
			ls[z++] = av[x][y++];
		}
		ls[z++] = '\n';
		x++;
	}
	ls[z] = '\0';

	return (ls);

}
