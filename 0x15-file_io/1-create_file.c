#include "main.h"
/**
  *create_file - creates a file.
  *
  *@filename: pointer to name of file to create
  *@text_content: string to write to file
  *
  *Return: 1 or -1
  *
  */

int create_file(const char *filename, char *text_content)
{
	int f_open, f_write, l = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (text_content[l] != '\0')
			l++;
	}

	f_open = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	f_write = write(f_open, text_content, l);

	if (f_open == -1 || f_write == -1)
		return (-1);

	close(f_open);
	return	(1);
}
