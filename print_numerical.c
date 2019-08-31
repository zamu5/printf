#include "holberton.h"

/**
 * print_int - Print a int
 * @value: parameter
 * Return: Nothing
 */
int print_int(va_list value)
{
	int num = va_arg(value, int), i = 0;
	char buf[SIZE] = {'0'};

	if (num < 0)
	{
		buf[i] = '-';
		i++;
	}
	if (num == 0)
		return (_putchar('0'));

	i += intlen(num);
	while (num != 0)
	{
		if (num % 10 > 0)
			buf[i] = (num % 10) + '0';
		else
			buf[i] = ((num % 10) * -1) + '0';
		num /= 10;
		i--;
	}

	return (write(STDIN_FILENO, buf, _strlen(buf)));
}

/**
 * print_unsigned_int - Print a unsigned int
 * @value: parameter
 * Return: Nothing
 */
int print_unsigned_int(va_list value)
{
	int i, len, r, l;
	long int num, numt;
	unsigned int n = va_arg(value, unsigned int);

	len = 0;
	i = 0;
	r = 1;
	l = 1;
	num = n;
	while (num > 0)
	{
		num /= 10;
		i++;
	}
	while (r < i)
	{
		l *= 10;
		r++;
	}
	while (l >= 1)
	{
		numt = (n / l) % 10;
		_putchar(numt + '0');
		len++;
		l /= 10;
	}
	return (len);
}
