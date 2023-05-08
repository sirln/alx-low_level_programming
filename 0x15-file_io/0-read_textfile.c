#include "main.h"
/**
  *read_textfile - reads a text file and prints
  *		it to the POSIX standard output
  *
  *@filename: pointer to name of file to read from
  *@letters: number of letters it should read and print
  *
  *Return: number of letters it could read and print
  *
  */


ssize_t read_textfile(const char *filename, size_t letters)
{
	char *file;
	ssize_t f_open, f_read, f_write;

	if (!filename)
		return (0);

	file = malloc(sizeof(char) * letters);
	if (!file)
		return (0);

	f_open = open(filename, O_RDWR);
	f_read = read(f_open, file, letters);
	f_write = write(STDOUT_FILENO, file, f_read);

	if (f_open == -1 || f_read == -1 || f_write == -1 || f_write != f_read)
	{
		free(file);
		return (0);
	}

	free(file);
	close(f_open);
	return	(f_write);
}
