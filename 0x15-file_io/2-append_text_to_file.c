#include "main.h"
/**
  *append_text_to_file - appends text at the end of a file.
  *
  *@filename: pointer to name of file
  *@text_content: string to append to file
  *
  *Return: 1 or -1
  *
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int f_open, f_append, l = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (text_content[l] != '\0')
			l++;
	}

	f_open = open(filename, O_WRONLY | O_APPEND);
	f_append = write(f_open, text_content, l);

	if (f_open == -1 || f_append == -1)
		return (-1);

	close(f_open);
	return	(1);
}
