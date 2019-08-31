#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: provided string
 *
 * Return: length of the string.
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;

	return (i);
}

/**
 * _strlen - returns the number of digits of an integer
 * @n: provided integer
 *
 * Return: length of the integer.
 */
int intlen(int n)
{
	int i = 0;

	for (i = 0; n > 9 || n < -9; i++)
		n = n / 10;

	return (i);
}
