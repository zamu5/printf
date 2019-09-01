#include "holberton.h"

/**
 * power - returns the exponential value of a number
 * @base: base number
 * @exponent: exponent number
 * Return: result
 */
int power(int base, unsigned int exponent)
{
	int count, result;

	if (exponent == 0)
		return (1);
	result = 1;
	for (count = 0; count < (int)exponent; count++)
	{
		result *= base;
	}
	return (result);
}

/**
 * _abs - returns the absolute value of a number
 * @n: the number to evaluate.
 * Return: the number's absolute value.
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}

