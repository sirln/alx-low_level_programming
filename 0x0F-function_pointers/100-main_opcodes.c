#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main (int argc, char **argv)
{
	int l = 0;
	unsigned char *opcodes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(*(argv + 1)) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	opcodes = (unsigned char *)main;
	while (l < atoi(argv[1]))
	{
		printf("%02x\n", opcodes[l]);
		l++;
	}

	return (0);
}
