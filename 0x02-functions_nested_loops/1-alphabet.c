/**
 * main - Entry point
 *
 * return: Always return 0(Success)
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	int i;
	for (i = 97; i < 123; i++)
	{
		putchar((char)i);
		putchar('\n');
	}
}
