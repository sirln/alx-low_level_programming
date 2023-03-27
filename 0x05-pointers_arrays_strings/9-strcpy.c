#include "main.h"
#include "2-strlen.c"
/**
 *_strcpy -  function that copies the string pointed to by src,
 *	including the terminating null byte (\0),
 *	to the buffer pointed to by dest.
 *@dest: pointer parameter
 *@src: pointer parameter
 *
 *Return: pointer
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;

	while (l <= _strlen(src))
	{
		dest[l] = src[l];
		l++;
	}
	return (dest);
}
