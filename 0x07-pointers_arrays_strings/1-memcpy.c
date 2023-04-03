/**
 *_memcpy - copies memory area.
 *
 *@dest: parameter
 *@src: parameter
 *@n: parameter
 *
 *Return: copy
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int l = 0;

	while (l < n)
	{
		dest[l] = src[l];
		l++;
	}
	return dest;
}
