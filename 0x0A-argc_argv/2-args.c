#include <stdio.h>
#include "holberton.h"

/**
 * main - prints all arguments received
 * @argc: argument count
 * @argv: argument vector array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
