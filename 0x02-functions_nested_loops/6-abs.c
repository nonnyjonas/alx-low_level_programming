#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the int to check
 * Return: the absolute value of int
 */
int _abs(int n)
{
	int negate = -1;
	int ab = n * negate;

	if (n >= 0)
		return (n);
	else
		return (ab);
}
