#include <stdio.h>

/**
 * main - program will print lowercase alphabets
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);
	putchar('\n');
	return (0);
}
