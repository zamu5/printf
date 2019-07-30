#include "holberton.h"
/**
 * print_int - Print a int
 * @value: parameter
 * Return: Nothing
 */
int print_int(va_list value)
{
	int num = va_arg(value, int);
	int i, bytes, cdata;
	char *buf;

	if (num < 0)
		_putchar(45);
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	cdata = num;
	for (i = 1; cdata > 9 || cdata < -9; i++)
		cdata = cdata / 10;

	buf = malloc(sizeof(char) * i);
	if (buf == NULL)
	{
		free(buf);
		return (0);
	}

	bytes = i;
	i--;
	while (num != 0)
	{
		if (num % 10 > 0)
			buf[i] = (num % 10) + '0';
		else
			buf[i] = ((num % 10) * -1) + '0';
		num /= 10;
		i--;
	}

	write(1, buf, bytes);
	free(buf);
	if (cdata < 0)
		bytes++;
	return (bytes);
}
/**
 * print_char - print char type
 * @value: data
 * Return: Nothing
 */
int print_char(va_list value)
{
	int i;

	i = va_arg(value, int);
	_putchar(i);

	return (1);
}
/**
 * print_string - pring string type
 * @value: data
 * Return: Nothing
 */
int print_string(va_list value)
{
	char *data = va_arg(value, char*);
	int i;

	if (data == NULL)
		data = "(null)";
	for (i = 0; data[i] != '\0'; i++)
		_putchar(data[i]);

	return (i);
}
/**
 * print_unsigned_int - Print a unsigned int
 * @value: parameter
 * Return: Nothing
 */
int print_unsigned_int(va_list value)
{
int i, len, r, l;
	long int  num, numt;
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
/**
 * print_percentage - Print a unsigned int
 * @value: parameter
 * Return: Nothing
 */
int print_percentage(va_list value __attribute__((unused)))
{
	_putchar(37);
	return (1);
}
