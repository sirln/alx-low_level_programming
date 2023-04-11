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
	int l, n, s = 0, x = 0;

	if (ac == 0 || av == NULL)
		return (NULL);


	for (l = 0; l < ac; l++)
	{
		for (n = 0; av[l][n]; n++)
		{
			s++;
		}
		s++;
	}

	ls = malloc(sizeof(char) * s);

	if (ls == NULL)
		return (NULL);

	for (l = 0; l < ac; l++)
	{
		for (n = 0; av[l][n]; n++)
		{
			ls[x++] = av[l][n];
		}
		if (ls[x] == '\0')
			ls[x++] = '\n';
	}

	return (ls);

}
