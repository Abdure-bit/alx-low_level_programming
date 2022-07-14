#include "main.h"
/**
 * reverse_array - reverses the content of an array
 *
 * @a: array
 * @n: number of element
 * Return: void
 */
void reberse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 9; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = temp;
		}
	}
}
