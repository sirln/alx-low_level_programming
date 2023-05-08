#include "main.h"


/**
  *allocate_memory - dynamic memory allocation.
  *
  *@f: file that will store string/characters.
  *
  *Return: pointer to file
  *
  */
char *allocate_memory(char *f)
{
	char *file;

	file = malloc(sizeof(char) * 1024);
	if (!file)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f);
		exit(99);
	}
	return (file);
}


/**
  *check_num_args - check number of arguments passed.
  *
  *@a: number of aguments.
  *
  */
void check_num_args(int a)
{
	if (a != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}


/**
  *close_file - Closes file descriptors.
  *
  *@d: The file descriptor to be closed.
  *
  */
void close_file(int d)
{
	if (close(d) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", d);
		exit(100);
	}

}

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

	check_num_args(argc);
	file = allocate_memory(argv[2]);

	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	from = open(argv[1], O_RDONLY);
	f_read = read(from, file, 1024);
	while (f_read > 0)
	{
		if (from == -1 || f_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		f_write = write(to, file, f_read);
		if (to == -1 || f_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		f_read = read(from, file, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	}
	free(file);
	close_file(from);
	close_file(to);

	return (0);
}
