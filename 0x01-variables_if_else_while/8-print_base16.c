#include <stdio.h>

/**
 * main - program will print all the numbers
 * of base 16 in lowercase, followed by a new line0
 * Return: 0
 */
int main(void)
{
	int n;
	char c;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
