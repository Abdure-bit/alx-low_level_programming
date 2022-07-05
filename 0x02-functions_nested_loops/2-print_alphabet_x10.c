#include<stdio.h>

/**
 * main - check the code.
 *
 * return: Always return 0.
 */
void print_alphabet_x10(void);
int main(void)
{
	print_alphabet_x10();
	return (0);

}

void print_alphabet_x10(void)
{
	for(int i=0; i<10; i++)
	{
		for(int j=97; j<123; j++)
		{
			putchar((char)j);
		}
		putchar('\n');
	}

}
