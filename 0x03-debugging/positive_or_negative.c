#include "holberton.h"

/**
 * positive_or_negative - Program will check positive or negative
 * @i: the int to check
 * Return: 0
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
}
