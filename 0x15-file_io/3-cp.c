#include "main.h"
/**
  *main - copies the content of a file to another file.
  *
  *@argc: number of arguments
  *@argv: array of arguments
  *
  *Return: 0 or 98 0r 99 or 100
  *
  */

int main(int argc, char **argv)
{
	int from, to, f_read, f_write;
	char *file;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}


	file = malloc(sizeof(char) * 1024);
	if (!file)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);

	}

	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	from = open(argv[1], O_RDONLY);
	f_read = read(from, file, 1024);
	while (f_read)
	{
		if (from == -1 || f_read -1)
		{
			free(file);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		f_write = write(to, file, f_read);
		if (to == -1 || f_write == -1)
		{
			free(file);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		f_read = read(from, file, 1024);
	}
	free(file);


	if (close(from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", from);
		exit(100);
	}
	if (close(to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", to);
		exit(100);
	}
	return (0);
}
