/**
 * main - Entry point
 *
 * return: Always return 0(Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	for (int i = 97; i < 123; i++)
	{
		putchar((char)i);
		putchar('\n');
	}
}
