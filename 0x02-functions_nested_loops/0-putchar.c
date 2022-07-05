#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always retur 0 (Success)
 */
int main(void)
{
	char arr[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n', '\0'};
	int i = 0;

	while (arr[i])
	{
		putchar(arr[i]);
		i++;
	}
	return (0);
}
