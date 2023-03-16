#include <unistd.h>

/**
 * main - program entry point
 *
 * Return: return 1
 */

int main(void)
{
	char *text = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	write(2,text,44);
	return (1);
}
