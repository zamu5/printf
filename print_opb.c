#include "holberton.h"
/**
 * print_octal - convert and print
 * @value: parameter
 * Return: lenthg of parameter
 */
int print_octal(va_list value)
{
	int i, dec = 1, oct = 0;

	i = va_arg(value, int);

	while (i > 0)
	{
		oct = oct + ((i % 8) * dec);
		dec = dec * 10;
		i = i / 8;
	}
	return (oct);
}
/**
 * print_bin - convert and print bin
 * @value: parameter
 * Return: lenthg of parameter
 */
int print_bin(va_list value)
{
	int data;
	int flag = 0, i, j, a = 1, cont = 0;
	unsigned int x;

	data = va_arg(value, int);
	if (data == 0)
	{
		_putchar('0');
		return (1);
	}
	for (i = 0; i < 32; i++)
	{
		x = ((a << (31 - i)) & data);
		if (x >> (31 - i))
			flag = 1;
		if (flag)
		{
			j = x >> (31 - i);
			_putchar(j + '0');
			cont++;
		}
	}
	return (cont);
}
