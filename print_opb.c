#include "holberton.h"
/**
 * print_octal - convert and print
 * @value: parameter
 * Return: lenthg of parameter
 */
int print_octal(va_list value)
{
	unsigned int data;
	int x, mask, flag = 0, cont = 0;

	data = va_arg(value, unsigned int);
	if (data == 0)
	{
		_putchar('0');
		return (1);
	}
	for (x = 30; x >= 0; x = x - 3)
	{
		mask = (data >> x & 0x7);
		if (mask)
			flag = 1;
		if (flag)
		{
			_putchar(mask + '0');
			cont++;
		}
	}
	return (cont);
}
/**
 * print_pointer - convert and print
 * @value: parameter
 * Return: lenthg of parameter
 */
int print_pointer(va_list value)
{
	unsigned int data;
	int x, mask, flag = 0, cont = 0;
	char hex[] = {"0123456789abcdef"};
	char num;

	data = va_arg(value, unsigned int);
	if (data == 0)
	{
		_putchar('0');
		return (1);
	}
	for (x = (sizeof(void *) * 8); x >= 0; x = x - 4)
	{
		mask = (data >> x & 0xFF);
		if (mask)
			flag = 1;
		if (flag)
		{
			num = hex[mask];
			_putchar(num);
			cont++;
		}
	}
	return (cont);
}
/**
 * print_hexa - convert and print hexadecimal numbers
 * @value: parameter
 * Return: lenthg of parameter
 */
int print_hexa(va_list value)
{
	unsigned int data;
	int x, mask, flag = 0, cont = 0;
	char hex[] = {"0123456789abcdef"};
	char num;

	data = va_arg(value, unsigned int);
	if (data == 0)
	{
		_putchar('0');
		return (1);
	}
	for (x = 28; x >= 0; x = x - 4)
	{
		mask = (data >> x & 0x0F);
		if (mask)
			flag = 1;
		if (flag)
		{
			num = hex[mask];
			_putchar(num);
			cont++;
		}
	}
	return (cont);
}
/**
 * print_HEXA - convert and print in upercase hexadecimal numbers
 * @value: parameter
 * Return: lenthg of parameter
 */
int print_HEXA(va_list value)
{
	unsigned int data;
	int x, mask, flag = 0, cont = 0;
	char hex[] = {"0123456789ABCDEF"};
	char num;

	data = va_arg(value, unsigned int);
	if (data == 0)
	{
		_putchar('0');
		return (1);
	}
	for (x = 28; x >= 0; x = x - 4)
	{
		mask = (data >> x & 0x0F);
		if (mask)
			flag = 1;
		if (flag)
		{
			num = hex[mask];
			_putchar(num);
			cont++;
		}
	}
	return (cont);
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
