/**
 *reverse_array - reverses the content
 *		of an array of integers.
 *
 *@a: parameter
 *@n: parameter
 *
 */
void reverse_array(int *a, int n)
{
	int l, s;

	for (l = 0; l < n / 2; l++)
	{
		s = a[l];
		a[l] = a[n - l - 1];
		a[n - l - 1] =  s;
	}
}
