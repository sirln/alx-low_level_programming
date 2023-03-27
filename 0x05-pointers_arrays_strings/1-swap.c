/**
 *swap_int - function that swaps the values of two integers.
 *@a: pointer parameter
 *@b: pointer parameter
 */
void swap_int(int *a, int *b)
{
	int l, s;

	l = *a;
	s = *b;
	*a = s;
	*b = l;
}
