#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: the string to be appended
 * @src: the string to be appended to dest
 * @n: the number of bytes from src to be uppended
 *
 * Return: a pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src int n)
{
	int m, i;

	m = 0;
	
	for (i = 0; i < 1000; i++)
	{
		if (dest[i] == '\0')
		{
			break;
		}
		m++;
	}
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[m + i] = src[i];
	}
	dest[m + i] = '\0';
	return (dest);
}
