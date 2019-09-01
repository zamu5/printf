#include "holberton.h"

/**
 * print_int - prints an int
 * @value: next value from va_list
 *
 * Return: amount of bytes written to stdout
 */
int print_int(va_list value)
{
	int num = va_arg(value, int), i = 0;

	if (num < 0)
		_print('-');

	i += (intlen(num) - 1);
	while (i >= 0)
	{
		_print((_abs(num / (power(10, i)) % 10) + '0'));
		i--;
	}

	return (0);
}

/**
 * print_unsigned_int - prints a unsigned int
 * @value: next value from va_list
 *
 * Return: amount of bytes written to stdout
 */
int print_unsigned_int(va_list value)
{
	unsigned int num = va_arg(value, unsigned int);
	int i = 0;

	if (num == 0)
		_print('0');

	i += (uintlen(num) - 1);
	while (i >= 0)
	{
		_print((num / (power(10, i)) % 10) + '0');
		i--;
	}

	return (0);
}
